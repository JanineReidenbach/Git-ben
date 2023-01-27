default: GitTest

GitTest.o: GitTest.c
     gcc -c GitTest.c -o GitTest.o
  
GitTest: GitTest.o
     gcc GitTest.o -o GitTest
  
clean:
  -rm -f GitTest.o
  -rm -f GitTest
