//Q1. Input ID, name and address of 10 students using structure
#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    char address[40];
};

int main(){
  struct Student s;
  int i;
  for(i=0;i<10;i++){    
  printf("Enter ID of Student(%d)\t ",i+1);
  scanf("%d",&s.id);
  printf("Enter Name od student:\t");
  scanf(" %49[^\n]",s.name);
   printf("Enter Address of student:\t");
  scanf(" %49[^\n]",s.address);
  }
  return 0;
}

<!DOCTYPE html>
<html>
<head>
    <title>Number Checking</title>
</head>
<body>
    <h2>Check a Number</h2>

    <input type="number" id="num" placeholder="Enter a number">
    <button onclick="checkNumber()">Check</button>

    <p id="result"></p>

    <script>
        function checkNumber() {
            let n = Number(document.getElementById("num").value);

            if (n > 0) {
                document.getElementById("result").innerHTML =
                    "The number is positive.";
            } else if (n < 0) {
                document.getElementById("result").innerHTML =
                    "The number is negative.";
            } else {
                document.getElementById("result").innerHTML =
                    "The number is zero.";
            }
        }
    </script>
</body>
</html>