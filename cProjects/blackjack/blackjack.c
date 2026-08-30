/* 260830

my standard compilation process until now
gcc cProjects/blackjack/blackjack.c -o cProjects/blackjack/blackjack.exe -lm
./cProjects/blackjack/blackjack.exe

multifile compilation
step 0: ensure you have function declarations for everything you plan to use
right below your #include(s). basically any functions you plan on using in other files
step 1: navigate to folder, 'cd cProjects/blackjack/'
step 2: multifile compile, 'gcc blackjack.c meliMath.c -o blackjack'
step 3: load, './blackjack'

*/

/*
Rules:
- Dealer vs Player
- SETUP: player places bet before cards are dealt, starting with any $ amount, can allocate any up to max
- SETUP: players receive 2 cards face-up, dealer receives one card face-up and one face-down (hole card)
- TURN: player adds two card values together in their head
- TURN: ACTION: Hit (take another card and add to total)
- TURN: ACTION: Stand (keep your current total, end your turn)
- TURN: ACTION: Double Down (double your bet, take a final card, then stand)
- DEALER TURN: dealer must hit until reaching 17 or higher. reveals the hole card. if the dealer busts (going over 21, all remaining players win)
- my version: random 1-10 card, no special rules

Turn 0: setup Game1
Player Bal: 500
Player Bets: 250 (-250 off of player bal, now 250)

Player has 6, 8 (14)
Dealer has ?, 10 (10+)

Turn 1: player hits
Player has 6, 8, 6 (20)
Dealer has ?, 10 (10+)

Turn 2: player stands, dealer auto-draws until reaching 17+
Player has 6, 8, 6 (20)
Dealer has ?, 10, 9 (10+)

Dealer now has 17+, hole revealed 6, 10, 9 (25)

Turn 3: end game

Check: dealer is over 21, auto win for player.
Bet Win: +500 (250 * 2)

Turn 0: setup Game2
Player Bal: 750
Player Bets: 250 (-250 off of player bal, now 500)

Player has 10, 10 (20)
Dealer has ?, 6 (6+)

Turn 1: player stands, dealer auto-draws until reaching 17+
Player has 10, 10 (20)
Dealer has ?, 6, 10 (16+)

Dealer now has 17+, hole revealed 4, 6, 10 (20)

Turn 3: end game

Check: No one is over 21, continue
Check: Who has the highest points, they are equal, so draw
Bet Draw: +250 (250 returned)

Turn 0: setup Game3
Player Bal: 750
Player Bets: 250 (-250 off of player bal, now 500)

Player has 4, 3 (7)
Dealer has ?, 8 (8+)

Turn 1: player hits

Player has 4, 3, 7 (14)
Dealer has ?, 8 (8+)

Turn 2: player hits

Player has 4, 3, 7, 3 (17)
Dealer has ?, 8 (8+)

Turn 3: player stands, dealer auto-draws until reaching 17+

Player has 4, 3, 7, 3 (17)
Dealer has ?, 8 (8+)

Dealer was already over 17+, so immediately stands, revealing cards
Dealer has 10, 8 (18)

Turn 4: end game

Check: no one is over 21, continue
Check: who has higher number, dealer does.

Bet Loss: -250

Turn 0: setup Game4
Player Bal: 500
// all scenarios reached, end simulation

*/

#include <stdio.h> // needed for printing

int HAND_ARRAY_SIZE = 21;

void initializeRand();
int randInt(int min, int max);
float randAlpha();

int countElementsIn(int array[]) {

    int array_length = HAND_ARRAY_SIZE;
    int count = 0;

    for (int i=0; i<array_length; i++) {
        if (array[0] != 0) {
            count = count + 1;
        }
    }

    return count;

}

int getRandomCardNumber() {
    return randInt(1, 10);
}

int getHandTotal(int handArray[]) {

    int handArray_length = HAND_ARRAY_SIZE;
    int total = 0;

    for (int i=0; i<handArray_length; i++) {
        total = total + handArray[i];
    }

    return total;

}

void printHands(int playerHand[], int dealerHand[]) {

    int playerTotal = getHandTotal(playerHand);
    int dealerTotal = getHandTotal(dealerHand);

    int playerHand_length = HAND_ARRAY_SIZE;
    int dealerHand_length = HAND_ARRAY_SIZE;

    printf("Your hand: ");
    
    for (int i=0; i<playerHand_length; i++) {

        if (playerHand[i] == 0) {
            continue;
        } else {
            printf("%d", playerHand[i]);
        }

        printf(" ");

    }

    printf("(%d)\n", getHandTotal(playerHand));

    printf("Dealer hand: ");

    for (int i=0; i<dealerHand_length; i++) {

        if (dealerHand[i] == 0) {
            continue;
        } else {
            printf("%d", dealerHand[i]);
        }

        printf(" ");

    }

    printf("? (%d+)\n", getHandTotal(dealerHand));

}

int game(int playerMoney) {

    // player has playerMoney money
    // place a bet between 1 thru playerMoney
    // store that bet, subtract the amount from playerMoney

    int betAmount = 0;

    printf("You currently have $%d.\n\n", playerMoney);
    printf("Place your bet amount: \n");
    scanf("%d", &betAmount);

    if (betAmount >= playerMoney) {
        printf("You're going all in.\n");
        betAmount = playerMoney;
    }

    printf("------------------------\n");
    printf("\n");

    // deal 2 cards to player + dealer (1 thru 10)
    // probably have an int array for each 21 large
    // display cards:
    // - player has 1, 2 (3)
    // - dealer has 1, ? (1+)

    int playerHand[21] = {getRandomCardNumber(), getRandomCardNumber()};
    int dealerHand[21] = {getRandomCardNumber()};
    
    // Step 1: give player option to hit (1), stand (2), double down (3)
    // if hit, give player card, go to step 2
    // if double down, give player card then end turn (step 3)
    // if stand, end turn (step 3)

    int turnOption = 0;
    int playerWentOver = 0;
    int playerHand_selectedIndex = 2;

    while (turnOption != 2) {

        printHands(playerHand, dealerHand);

        printf("'1' to hit.\n");
        printf("'2' to stand.\n");
        printf("'3' to double down.\n");

        scanf("%d", &turnOption);
        printf("------------------------\n");
        printf("\n");

        if (turnOption == 1) {

            playerHand[playerHand_selectedIndex] = getRandomCardNumber();
            printf("You hit, drawing %d. Your total is now %d.\n\n", playerHand[playerHand_selectedIndex], getHandTotal(playerHand));
            playerHand_selectedIndex = playerHand_selectedIndex + 1;

            if (getHandTotal(playerHand) > 20) {
                turnOption = 2;

                if (getHandTotal(playerHand) > 21) {
                    playerWentOver = 1;
                    printf("You went over 21. ");
                }
            }

        } else if (turnOption == 2) {

            printf("You ended your turn on %d, dealer draws.\n", getHandTotal(playerHand));

        } else if (turnOption == 3) {

            if (playerMoney < betAmount * 2) {
                printf("You don't have enough money to double down, try something else.\n");
                continue;
            }

            playerHand[playerHand_selectedIndex] = getRandomCardNumber();
            printf("You drew %d. Your total is now %d.\n\n", playerHand[playerHand_selectedIndex], getHandTotal(playerHand));

            betAmount = betAmount * 2;
            printf("You doubled down, bet now at $%d.\n\n", betAmount);

            if (getHandTotal(playerHand) > 21) {
                playerWentOver = 1;
                printf("You went over 21. ");
            }

            turnOption = 2;

        } else {

            printf("Invalid turn option, try again.\n");

        }

    }
    
    // Step 2: loop
    // display cards again
    // if the player hit, and their cards are under 21, repeat step 1
    // if the player hit, and their cards are 21+, step 4.1

    // Step 3: end turn
    // dealer: tally total (eg. 1, 2) and keep drawing cards until hand is 17+

    if (playerWentOver == 0) {

        printf("It's the dealer's turn now.\n");

        int exit = 20;
        int dealerHand_selectedIndex = 2;

        while (exit > 0) {

            int dealerHand_length = HAND_ARRAY_SIZE;
            dealerHand[dealerHand_selectedIndex] = getRandomCardNumber();

            dealerHand_selectedIndex = dealerHand_selectedIndex + 1;
            exit = exit - 1;

            if (getHandTotal(dealerHand) > 16) {
                exit = 0;
            }

        }

        printf("Dealer hand: ");

        int dealerHand_length = HAND_ARRAY_SIZE;

        for (int i=0; i<dealerHand_length; i++) {

            if (dealerHand[i] == 0) {
                continue;
            } else {
                printf("%d", dealerHand[i]);
            }

            printf(" ");

        }

        printf("(%d)\n\n", getHandTotal(dealerHand));

    }

    // Step 4: judgement
    // 4.1: if player's cards go over 21, player loses, step 5.2
    // 4.2: if dealer's cards go over 21, player wins, step 5.1
    // 4.3: compare who has higher total, determines winner
    // lose = 1, win = 2, draw = 3

    // Step 5: distribute earnings
    // 5.1: if player wins, post_bet_startingAmount + (bet * 2)
    // 5.2: if player loses, post_bet_startingAmount
    // 5.3: if draw, post_bet_startingAmount + bet

    int finalPlayerTotal = getHandTotal(playerHand);
    int finalDealerTotal = getHandTotal(dealerHand);

    int judgement = 0;

    if (playerWentOver == 1 || finalPlayerTotal > 21 || (finalDealerTotal > finalPlayerTotal && finalDealerTotal < 22)) {

        judgement = 1;
        printf("You lose. You paid the dealer $%d.\n", betAmount);
        playerMoney = playerMoney - betAmount;

    } else if (getHandTotal(dealerHand) > 21 || finalPlayerTotal > finalDealerTotal) {

        judgement = 2;
        printf("You win! The dealer gave you $%d.\n", betAmount);
        playerMoney = playerMoney + betAmount;

    } else if (finalPlayerTotal == finalDealerTotal) {

        judgement = 3;
        printf("Draw.\n");

    } else {

        printf("error: invalid judgement.\n");
        printf("finalPlayerTotal: %d, finalDealerTotal: %d\n\n", finalPlayerTotal, finalDealerTotal);
    
    }

    return playerMoney;

}

void gameLoop() {

    int startingMoney = 500;

    while (startingMoney > 0) {
        startingMoney = game(startingMoney);
    }

    printf("You ran out of money! You left the game.\n");

}

int main() {

    initializeRand();

    // printf("Rolled the dice: %d\n", randInt(1, 6));
    // printf("Random Alpha: %.5f\n", randAlpha());

    gameLoop();

    return 0;

}