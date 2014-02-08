/**
 * @file
 * @author Dirk Fortmeier
 * @date ?
 *
 * contains differnt exceptions
 */

#ifndef _YGE_EXCEPTIONS_H_
#define _YGE_EXCEPTIONS_H_


#include <exception>
#include <string>
#include <sstream>


class YGEExceptionFileNotFound : public std::exception {

private:
	std::string missingFile;
public:
	YGEExceptionFileNotFound(std::string s) {
		missingFile = s;
	}
        
	~YGEExceptionFileNotFound() throw() {} 
	virtual const char* what() const throw() {
		std::stringstream s;
		s << "File not found: " << missingFile;
		return s.str().c_str();
	}
};


class YGEExceptionMethodNotImplementedYet : public std::exception {

private:

public:
	virtual const char* what() const throw(){
		return "Method not implemented yet!";
	}
};

class YGEExceptionSubsystemError : public std::exception {

private:
	std::string subsystem;
public:
	YGEExceptionSubsystemError(std::string s){
		subsystem = s;
	}

	~YGEExceptionSubsystemError() throw() {}
	virtual const char* what() const throw(){
		return subsystem.c_str();
	}
};

#endif
