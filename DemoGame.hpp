#include "Board.hpp"

namespace WarGame {
    class DemoGame {
    private:
        const int numRows = 8;
        const int numCols = 8;
        Board board;
    public:

        /**
        * The constructor initilizes the board and places the soldiers.
        */
        DemoGame();

        /**
         * This function runs a sample play of the game and returns the winner (1 or 2, or 0 in case of tie).
         */
        uint play();

        /**
        * The destructor deletes the soldiers from the board.
        */
        ~DemoGame();
    };
}