% Student Number: 270201072
% Student Name: Gökay Gülsoy

% grid predicate is the main predicate that will be used 
% to build the grid and if at the end of constructed grid
% all intersections is satisfied it is returned as a solution
% otherwise prolog will backtrack to find other possible solutions
grid(Lengths, IntersectionLists, ReturnedList) :-
    length(Lengths, WordNumber),
    length(IntersectionLists, IntersectionNumber),
    IntersectionNumber =:= WordNumber - 1, 

    buildGrid(Lengths, IntersectionLists, [], FormedGrid),

    forall(member([WordPosition1, CharacterPosition1, WordPosition2, CharacterPosition2], IntersectionLists),
           (nth0(WordPosition1, FormedGrid, Word1),
            nth0(WordPosition2, FormedGrid, Word2),
            intersection(Word1, CharacterPosition1, Word2, CharacterPosition2))),

    ReturnedList = FormedGrid.


% This predicate is used to build grid by finding words that match the
% given lengths and checks for intersections by calling the intersection predicate
buildGrid([], _, FormedGrid, FormedGrid).
buildGrid([Length|OtherLengths], IntersectionLists, InitialGrid, FormedGrid) :-
    findall(Word, (word(Word), atom_length(Word, Length), \+member(Word, InitialGrid)), Words),
    member(Word, Words),
    append(InitialGrid, [Word], NewGrid),
    buildGrid(OtherLengths, IntersectionLists, NewGrid, FormedGrid).



% This predicate will be used to Find intersections of 
% FileWord1 and FileWord2
intersection(FileWord1, Position1, FileWord2, Position2) :-
    atom_chars(FileWord1, Characters1),
    atom_chars(FileWord2, Characters2),
    nth0(Position1, Characters1, Character),
    nth0(Position2, Characters2, Character).

