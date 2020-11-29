
# First App Using C++

Before we start, I use Dev-c++ IDE to create c++ programs.

### Goal
Our goal in this example is to build a simple program that can print our lovely phrase which is "Hello world".


### Steps
#### First, in C++ when you want to use input and output functionality you need to include iostream: Input-Output Strem.

```git
#include <iostream>
using namespace std;
```

if you wish to know what namespace mean, I think this link will help you more to understand:
<a href="https://www.quora.com/What-does-using-namespace-std-mean-in-C++">namespace explenation</a>


#### Second, Now we will define main function for the program. this will help the compiler to know from where the program starts.

```git 
#include <iostream>
using namespace std;

int main(){

	return 0 ;
}

```

#### Finally, we completed the setup and now we can use output function to print our phrase. In c++ case, cout is the output function.

```git

#include <iostream>
using namespace std;

int main(){

	cout << "Hello World!" << endl ;

	
	return 0 ;
}

```
Note: simply, endl will print new line.



