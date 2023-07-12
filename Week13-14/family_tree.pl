female(mary).
female(sandra).
female(juliet).
female(lisa).
male(peter).
male(paul).
male(dick).
male(bob).
male(harry).
parent(bob, lisa).
parent(bob, paul).
parent(bob, mary).
parent(juliet, lisa).
parent(juliet, paul).
parent(juliet, mary).
parent(peter, harry).
parent(lisa, harry).
parent(mary, dick).
parent(mary, sandra).

father(X, Y):- male(X), parent(X, Y).
sister(X, Y):- female(X), parent(Z, X), parent(Z, Y).
grandmother(X, Y):- female(X),
                    parent(X, Z),
                    parent(Z, Y).


