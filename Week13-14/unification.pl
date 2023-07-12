likes(bob,fondue).
likes(sue,fondue).
friends(X,Y) :-
    likes(X, Something),
    likes(Y, Something),
    X\=Y.
