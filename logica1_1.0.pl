
ladron(walter).
ladron(jesse).
policia(hank).
policia(steve).

socios(X,Y):-(ladron(X),ladron(Y));(policia(X),policia(Y)).
enemigos(X,Y):- (ladron(X),policia(Y));(policia(X),ladron(Y)).

mensaje:-
  nl,nl,write('Personas: walter, jesse, hank, steve.'),nl,
  write('Funciones: ladron(x), policia(x), enemigos(x,y), socios(x,y)'),nl,nl,nl.
:-mensaje.
