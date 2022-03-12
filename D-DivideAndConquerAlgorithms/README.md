## Divide and Conquer Method

<img width="390" alt="image" src="https://user-images.githubusercontent.com/91516739/158016799-95c3d857-3918-408a-ba02-fcac13811258.png">

- The divide and conquer technique in this algorithm – divide matrix A & matrix B into 8 submatrices and then recursively compute the submatrices of C.
- C=A*B

<img width="522" alt="image" src="https://user-images.githubusercontent.com/91516739/158016717-7f569f94-25fe-4b59-8f22-903a0193c800.png">


## Strassen Matrix Multiplication


<img width="241" alt="image" src="https://user-images.githubusercontent.com/91516739/158016840-72b4d8e8-a048-4152-9808-b397b7dc9a34.png">

<img width="184" alt="image" src="https://user-images.githubusercontent.com/91516739/158016865-d140c448-1093-44d8-a8d5-9a26245e3bdd.png">

- But Strassen Algorithm came up with a solution where we don’t need 8 recursive calls but can be done in only 7 calls and some extra addition and subtraction operations.
- C=A*B

<img width="514" alt="image" src="https://user-images.githubusercontent.com/91516739/158016687-bb5a16fa-58be-45bb-8687-ea4ce7ab6b6b.png">


## Algorithm of Divide and Conquer Method:

<img width="357" alt="image" src="https://user-images.githubusercontent.com/91516739/158016991-87958876-59e3-47ef-8e43-f7a3327586e3.png">


## Algorithm of Strassen Matrix Multiplication:

<img width="540" alt="image" src="https://user-images.githubusercontent.com/91516739/158017101-4fb0cad0-1a3f-4b44-9fed-30657bf10c6c.png">

## Time complexity Analysis:
### 1] Divide & Conquer Method:
- In Divide & Conquer Method we do 8 multiplications for matrices of size N/2 x N/2 and 4 additions. Addition of two matrices takes O(N2) time, so Time complexity 
- T(N) = 8T(N/2) + O(N2) 
- O(n^3)

### 2] Strassen Matrix Multiplication:
- In Strassen Matrix Multiplication we do 7 multiplications for matrices of size N/2 x N/2 and some additions or subtractions. Addition and subtraction of two matrices takes O(N2) time, so Time complexity 
- T(N) = 7T(N/2) +  O(N2)
- O(n^log(7)
