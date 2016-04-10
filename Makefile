CXX = g++
CXXFLAGS = -Wall -MMD
EXEC = cc3k
OBJECTS = main.o floor.o textdisplay.o cell.o unreach.o passage.o tile.o character.o player.o dwarf.o elves.o human.o orc.o enemy.o vampire.o werewolf.o troll.o phoenix.o goblin.o item.o potion.o merchant.o dragon.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
