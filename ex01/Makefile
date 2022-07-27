Phonebook: main.o Phonebook.o Contact.o
	c++ -g3 main.o Phonebook.o Contact.o -o Phonebook

main.o: main.cpp
	c++ -g3 -c main.cpp

Phonebook.class.o: Phonebook.cpp
	c++ -g3 -c Phonebook.cpp

Contact.class.o: Contact.cpp
	c++ -g3 -c Contact.cpp

clean:
	rm *.o

fclean:
	clean