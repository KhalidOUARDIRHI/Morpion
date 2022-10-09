# Morpion GAME
## m,n,k-game
An m,n,k-game is an abstract board game in which two players take turns in placing a stone of their color on an m-by-n board, the winner being the player who first gets k stones of their own color in a row, horizontally, vertically, or diagonally.Thus, tic-tac-toe is the 3,3,3-game and free-style gomoku is the 15,15,5-game. An m,n,k-game is also called a k-in-a-row game on an m-by-n board.  

The m,n,k-games are mainly of mathematical interest. One seeks to find the game-theoretic value, the result of the game with perfect play. This is known as solving the game. 

## Strategy stealing argument
A standard strategy stealing argument from combinatorial game theory shows that in no m,n,k-game can there be a strategy that assures that the second player will win (a second-player winning strategy). This is because an extra stone given to either player in any position can only improve that player's chances. The strategy stealing argument assumes that the second player has a winning strategy and demonstrates a winning strategy for the first player. The first player makes an arbitrary move, to begin with. After that, the player pretends that they are the second player and adopts the second player's winning strategy. They can do this as long as the strategy doesn't call for placing a stone on the 'arbitrary' square that is already occupied. If this happens, though, they can again play an arbitrary move and continue as before with the second player's winning strategy. Since an extra stone cannot hurt them, this is a winning strategy for the first player. The contradiction implies that the original assumption is false, and the second player cannot have a winning strategy.

This argument tells nothing about whether a particular game is a draw or a win for the first player. Also, it does not actually give a strategy for the first player. 

## Applying results to different board sizes

A useful notion is a "weak (m,n,k) game", where k-in-a-row by the second player does not end the game with a second player win.
If weak (m,n,k) is a draw, then decreasing m or n, or increasing k will also result in a drawn game.
Conversely, if weak or normal (m,n,k) is a win, then any larger weak (m,n,k) is a win.
Note that proofs of draws using pairing strategies also prove a draw for the weak version and thus for all smaller versions. 
