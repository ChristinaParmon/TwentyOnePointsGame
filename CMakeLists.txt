cmake_minimum_required(VERSION 3.22)
project(TwentyOnePointsGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(TwentyOnePointsGame main.cpp Hand.cpp Hand.h Card.cpp Card.h Player.cpp Player.h Human.cpp Human.h Computer.cpp Computer.h Deck.cpp Deck.h Game.cpp Game.h)
