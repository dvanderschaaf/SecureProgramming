all: game-menu unknown-dungeon tic-tac-tow mind-reader game_lobby word_sample zoo-sample black-jack

%: %.cc
	g++ -std=c++11 $< -o $@.exe

%: %.c
	gcc $< -o $@.exe

%: %.cpp
	g++ -std=c++11 $< -o $@.exe

clean:
	rm *.exe
