 <details>
  <summary><h2>▶ C programming language</h2></summary>


<details>
  <summary><h3> IDE,Text Editor,Compiler</h3></summary>
  
  - **_IDE (Integrated Development Environment)_**
   Là môi trường để viết code. Ngoài ra IDE tích hợp sẵn các tool hỗ trợ khác như trình biên dịch (Compiler), trình thông dịch (Interpreter), kiểm tra lỗi (Debugger), highlight code,tìm kiếm code…
**_Compiler_** 
	hay còn gọi là Trình biên dịch, là một chương trình có nhiệm vụ dịch các các code của một ngôn ngữ lập trình tương ứng thành một chương trình tương đương của ngôn ngữ cấp thấp hơn (thường là ngôn ngữ máy).
</details>	

<details>
  <summary><h3>Kiểu dữ liệu</h3></summary>

  ![kieu du lieu](./Kieu_Dulieu(1).PNG)
  ![kieu du lieu](./Kieu_Dulieu(2).PNG)

</details>
<details>
  <summary><h3>Lệnh điều kiện trong C</h3></summary>

  **_Câu lệnh If_**
  - Đây là 1 câu lệnh điều kiện để kiểm tra 1 điều kiện nào có được thỏa mãn không. Nếu điều kiện được thỏa mãn thì sẽ thực thi đoạn code bên trong nó.
  `if (điều kiện){
    Khối lệnh sẽ được thực hiện nếu <điều kiện> đúng.
}`
 - Ví dụ:
```C
#include <stdio.h>
int main(){
   int a;
   printf(“Nhap a = “); scanf(“%d”, &a);
 
   if (a % 2 == 0) // a chia hết cho 2
   {
       printf(“%d la so chan”, a);
   }
   printf(“\nXong!”);
} 
```
 - Câu lệnh If else
 ```C
 if (condition)
 {
   // statement1
   // khối lệnh sẽ thực hiện nếu điều kiện đúng
}else
{
   // statement2
   // khối lệnh sẽ thực hiện nếu điều kiện sai
}
```
- Ví dụ
```C
#include <stdio.h>
 
int main(){
   int a;
   printf(“Nhap a = “); scanf(“%d”, &a);
   if (a % 2 == 0) // a chia hết cho 2
   {
       printf(“%d la so chan”, a);
   }else{
       printf(« %d la so le », a) ;
   }
} 
```

 - Câu lệnh if … else if … else:

```C
	if (test expression1) 
	{
	// statement(1)
	}
	else if(test expression2) 
	{
	// statement(2)
	}
	else if (test expression3) 
	{
	// statement(3)
	}
	…
	else 
	{
	// statement(n)
	}
```

**_switch case_**

 - Lệnh switch case là một cấu trúc điều khiển & rẽ nhánh hoàn toàn có thể được thay thế bằng cấu trúc if else. Tuy nhiên, việc sử dụng switch case sẽ giúp code của chúng ta dễ viết và dễ đọc hơn. Một điều nữa là sử dụng switch case có vẻ như cho hiệu năng tốt hơn so với sử dụng if else trong trường hợp có nhiều điều kiện có thể xảy ra.
```C
switch (expression)// tham số đầu vào 
​{
   case constant1:// điều kiện
     // statements(khối lệnh)
     break;
   case constant2:
     // statements
     break;
   default:
     // default statements
}
```
 - expression phải bắt buộc là giá trị hằng, có thể là biểu thức nhưng kết quả cần là hằng số. Trong đó, expression sẽ được so sánh với các giá trị của các case.
 - Nếu có 1 case nào đó khớp giá trị, các khối lệnh tương ứng sau case đó sẽ được thực hiện cho tới khi gặp lệnh break. Do đó, nếu chúng ta không sử dụng break thì tất cả các case kể từ case khớp giá trị đều được thực hiện.
 - Case default sẽ được thực hiện nếu không có case nào khớp giá trị với expression. 
 - Ví dụ:

```C
#include <stdio.h>

int main(void) {
int thang =1 ;
switch ( thang){
case 1:
	printf("30 ngay\n");
	break;
case 12:
	printf("28 ngay\n");
	break;
	default:
	printf("khong hop le\n");
	}
return 0;
}
	//Tổng bằng 8
```
 - Nếu không break ở cuối mỗi case thì chương trình sẽ chạy tiếp xuống các case ngay bên dưới dẫn đến chương trình có thể sai ý đồ.
 - Nhưng cố ý không break,có thể hiển thị nhiều điện kiện với 1 nội dung

```C
int main(void) {
day = Mon; 
switch (day) {
case Mon:
case Tue:
case Wed:
case Thu:
case Fri:
 	printf("Ngày trong tuần\n");
 break;
case Sat:
case Sun:
 	printf("Ngày lễ\n");
 break;
default:
 	printf("Không tồn tại\n");
}
return 0;
}
```
**_if và switch :_**
 - Lệnh switch case có hạn chế là biểu thức điều kiện phải là số nguyên. Đối với lệnh if else, biểu thức điều kiện là true hoặc false. Do vậy, một số trường hợp, bắt buộc phải sử dụng lệnh if else thay vì switch case.
 - Nên sử dụng if else trong bài toán ít trường hợp, các biểu thức điều kiện đơn giản
 - Switch sẽ so sánh các tính năng khác nhau,mã sạch sẽ hơn và dễ đọc.
 - Nên sử dụng switch case trong bài toán mul-ti choice, biểu thức điều kiện tính toán phức tạp nhưng phải có giá trị nguyên.




</details>
<details>
  <summary><h3>Các biến trong C</h3></summary>

- Con trỏ (Pointer Variables): Lưu trữ địa chỉ của một biến hoặc vùng nhớ.
	`int* ptr = NULL;`
- Biến mảng (Array Variables): Lưu trữ nhiều giá trị trong một biến duy nhất.
	`int numbers[] = {1, 2, 3, 4, 5};`
- Biến kích thước (Size Variables): Lưu trữ giá trị kích thước của các đối tượng trong bộ nhớ.
    ```size_t length = 10;```
- Biến không đổi (Constant Variables): Lưu trữ giá trị không thay đổi trong suốt thời gian chương trình chạy.
    ```const int MAX_VALUE = 100;```
- Biến từ xa (Extern Variables):Khai báo một biến đã được định nghĩa trong một tệp tin khác.
    ```extern int globalVar;```
- Biến có phạm vi tĩnh (Static Scope Variables): Lưu trữ giá trị trong suốt vòng đời của biến và chỉ có thể truy cập trong phạm vi của một hàm hoặc tệp tin.
    ```static int count = 0;```
- Biến vô kiểu (Void Variables): Lưu trữ một địa chỉ bất kỳ và có thể chuyển đổi thành bất kỳ kiểu con trỏ nào.
	`void* ptr;`
- Biến trình tự (Sequence Variables): Chỉ định rằng một biến thường được truy cập nhanh chóng và thường xuyên.
    `register int counter = 0;`
- Biến quyền (Qualifier Variables): Đánh dấu biến có thể thay đổi mà không cần thông báo và không nên tối ưu hóa.
   	`volatile int status;`
- Biến tĩnh (Static Variables): Lưu trữ giá trị trong suốt vòng đời của chương trình và giá trị được duy trì ngay cả khi hàm hoặc khối lệnh kết thúc.
	```static int count = 0;```
- Biến tĩnh cục bộ (Local Static Variables): Lưu trữ giá trị trong suốt vòng đời của biến, nhưng chỉ có thể truy cập trong phạm vi của một hàm.
    ```C
    void function() {
        static int count = 0;
        // ...
    }
    ```
- Biến cấu trúc (Structure Variables): Lưu trữ các thành phần có liên quan vào một biến.
    ```
    struct Person {
        char name[20];
        int age;
    };
    struct Person p1;
	```
- Biến cấu trúc mở rộng (Extended Structure Variables): Lưu trữ các thành phần có liên quan vào một biến và mở rộng chức năng của cấu trúc.
    ```C
    struct Person {
        char name[20];
        int age;
    } p1;
    ```
- Biến liên kết (Union Variables): Lưu trữ giá trị của một thành phần trong một thời điểm.
    ```
    union Data {
        int x;
        float y;
    };
    union Data data;
    ```
- Biến liệt kê (Enumeration Variables): Lưu trữ một trong các giá trị được xác định trước từ một tập hợp các giá trị có tên.
    ```
    enum Color {
        RED,
        GREEN,
        BLUE
    };
	enum Color c = BLUE;
- Biến kiểu định danh (Typedef Variables): Tạo ra một tên mới cho một kiểu dữ liệu đã tồn tại để sử dụng dễ dàng hơn.
    ```C
    typedef int Integer;
    Integer number = 42;
	```
- Biến kiểu dữ liệu do người dùng định nghĩa (User-defined Data Type Variables): Định nghĩa và sử dụng kiểu dữ liệu tùy chỉnh trong ngôn ngữ C.
	```C
	typedef struct {
    	char name[20];
    	int age;
	} Person;
	Person p1; 
	```
</details>
<details>
  <summary><h3>Quá trình biên dịch</h3></summary>
	
Quy trình biên dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java, C#…) sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi.
### Quá trình biên dịch bao gồm 4 giai đoạn:
	
- **_Pre-processor (Giai đoạn tiền xử lý):_** Nhận mã nguồn và xóa bỏ các dòng comments, xử lý các chỉ thị tiền xử lý có bắt đầu bằng kí hiệu `#`. Như `#include` , `#define` .
	- `#include` được sử dụng để chèn nội dung của một tệp (thường là một tệp tiêu đề), `ví dụ :header.h` vào trong mã nguồn.
	-  Khi chương trình được biên dịch, nội dung của `header.h ` sẽ được chèn vào vị trí của `#include`.
	-  Khi chương trình được biên dịch, các định nghĩa ` #define` sẽ thay bằng giá trị cụ thể  vào mã nguồn.Giống như việc bạn thay thế tất cả các thể hiện của PI bằng giá trị 3.14159 
	-  Sau khi qua quá trình tiền xử lý thì file code lúc này sẽ có dạng `.i`.
	-  Dùng lệnh `gcc -E filename.c -o filename.i` hoặc `gcc -E filename.c` để xem code sau khi qua quá trình preprocessor.
- **_Compiler (Giai đoạn dịch NNBC sang ngôn ngữ Assembly):_** Kiểm tra các kiểu dữ liệu có lỗi hay không, phân tích cú pháp (syntax) của mã nguồn NNBC và tối ưu code.
	-  Quá trình này sẽ biên dịch từ code `.i` sang ngôn ngữ assembly `.s`.
	-  Dùng lệnh `gcc -S -o filename.s filename.c` để có thể xem code sau 	quá tình compiler.
- **_Assembler (Giai đoạn dịch ngôn ngữ Assembly sang ngôn ngữ máy):_** Biên dịch ngôn ngữ Assembly sang ngôn ngữ máy (0 và 1). Và tạo ra tệp tin Object `.o` or `.obj`.
	-  Dùng lệnh `gcc -c filename.c -o filename.o` để tạo ra file ".o" và dùng lệnh `objdump -d -Mintel filename.o` để xem code.
- **_Linker (Giải đoạn liên kết):_** Trong giai đoạn này mã máy của một chương trình `.o` dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích nhất. Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này. Chính vì vậy mà các lỗi liên quan đến việc gọi hàm hay sử dụng biến tổng thể mà không tồn tại sẽ bị phát hiện. Kể cả lỗi viết chương trình chính không có hàm main() cũng được phát hiện trong liên kết.
	- File sau khi được gộp lại thì sẽ có đuôi mở rộng Executable `.exe`, còn trên Linux và MacOs thì có thể có đuối theo chỉ định hoặc không có đuôi mở rộng.

- Để chạy file code C trên `terminal` dùng lệnh `gcc -o filename filename.c` đẻ tạo ra tệp thực thi, sau đó dùng lệnh `./filename` để chạy tệp thực thi đó.

</details>
<details>
  <summary><h3>Phân vùng bộ nhớ trên RAM, cấp phát bộ nhớ động</h3></summary>
	
### Phân vùng bộ nhớ trên RAM(5 vùng)

| Stack |
|:-----:|
|   ↓   |
|   ↑   |	
|  Heap |
|  Bss(Uninitialized data)  |
|  Data(Initialized data)   |
|  Text |
- ***Text:*** Quyền truy cập chỉ có thể Read( không thay đổi)
	- Chứa khai báo các hằng số(.rodata)
	- Nó chưa lệnh thực thi nên tránh sửa đổi instruction
	- Biến const được lưu vào text 
- ***Data:*** Quyền truy cập Read-Write
	- Chứa biến toàn cục hoặc biến static khác 0
	- Được giải phóng khi kết thúc chương trình
- ***Bss:*** Quyền truy cập Read-Write
	- Chứa biến toàn cục hoặc các biến static bằng 0 hoặc không khởi tạo
	- Được giải phóng khi kết thúc chương trình
- ***Stack:*** Quyền truy cập là Read-Write.
	- Được sử dụng cấp phát cho biến local, input parameter của hàm,...
	- Sẽ được giải phóng khi ra khỏi block code/hàm
- ***Heap:*** Quyền truy cập là Read-Write.
	- Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc,...
	- Sẽ được giải phóng khi gọi hàm free,...
	### So sánh Stack và Heap?
	- Bộ nhớ: Bộ nhớ Heap và bộ nhớ Stack bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi.
		- Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào... Truy cập vào bộ nhớ này rất nhanh và được thực thi khi chương trình được biên dịch.
		- Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ được cấp phát động bởi các hàm malloc - calloc - realloc (trong C)
	- Kích thước vùng nhớ:
		- Stack: kích thước của bộ nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành, ví dụ hệ điều hành Windows là 1 MB, hệ điều hành Linux là 8 MB (lưu ý là con số có thể khác tùy thuộc vào kiến trúc hệ điều hành của bạn).
		- Heap: kích thước của bộ nhớ Heap là không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu của chương trình.
	- Đặc điểm vùng nhớ
		- Stack: vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong công việc của mình.
		- Heap: Vùng nhớ Heap được quản lý bởi lập trình viên (trong C hoặc C++), dữ liệu trong Heap sẽ không bị hủy khi hàm thực hiện xong, điều đó có nghĩa bạn phải tự tay hủy vùng nhớ bằng câu lệnh free (trong C), và delete hoặc delete [] (trong C++), nếu không sẽ xảy ra hiện tượng rò rỉ bộ nhớ. 
	### Lưu ý: 
	- Việc tự động dọn vùng nhớ còn tùy thuộc vào trình biên dịch trung gian.
	- Vấn đề lỗi xảy ra đối với vùng nhớ Stack: Bởi vì bộ nhớ Stack cố định nên nếu chương trình bạn sử dụng quá nhiều bộ nhớ vượt quá khả năng lưu trữ của Stack chắc chắn sẽ xảy ra tình trạng tràn bộ nhớ Stack (Stack overflow), các trường hợp xảy ra như bạn khởi tạo quá nhiều biến cục bộ, hàm đệ quy vô hạn,..
		- Ví dụ về tràn bộ nhớ stack với hàm đệ quy vô hạn:
		```C
		int foo(int x){
			printf("De quy khong gioi han\n");
			return foo(x);
		}
		```
	- Vấn đề lỗi xảy ra đối với vùng nhớ Heap: Nếu bạn liên tục cấp phát vùng nhớ mà không giải phóng thì sẽ bị lỗi tràn vùng nhớ Heap (Heap overflow). Nếu bạn khởi tạo một vùng nhớ quá lớn mà vùng nhớ Heap không thể lưu trữ một lần được sẽ bị lỗi khởi tạo vùng nhớ Heap thất bại.
		- Ví dụ trường hợp khởi tạo vùng nhớ Heap quá lớn:
		```C 
		int *A = (int *)malloc(18446744073709551615); 
		```
	### Các cách sử dụng malloc, calloc, realloc, free:
	- ***Malloc:*** Cấp phát bộ nhớ động chưa có giá trị khởi tạo cho mỗi phần tử, trả về con trỏ NULL khi cấp phát thành công
	```C 
	void* malloc(size_t size);
	```
	- ***Calloc:*** Cấp phát bộ nhớ động có giá trị khởi tạo ban đầu của mỗi phần tử đều là 0, trả về con trỏ NULL khi cấp phát thành công
	```C
	void* calloc(size_t num, size_t size);
	```
	- ***Realloc:*** Thay đổi kích thước bộ nhớ của bộ nhớ đã được cấp phát trước đó của Malloc và Calloc, trả về con trỏ NULL khi thay đổi thành công
	```C
	void* realloc(void* ptr, size_t size);
	```
	- ***Free:*** Giải phóng bộ nhớ đã được cấp phát bằng Malloc, Calloc, Realloc sau khi sử dụng xong, không có trả về
	```C
	void free(void* ptr);
	```
	### Khác nhau của static cục bộ và static toàn cục:
- Biến static cục bộ: Khi 1 biến cục bộ được khai báo với từ khóa 		static. Biến sẽ chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy chương trình. Giá trị của nó không bị mất đi ngay cả khi kết thúc hàm. Tuy nhiên khác với biến toàn cục có thể gọi trong tất cả mọi nơi trong chương trình, thì biến cục bộ static chỉ có thể được gọi trong nội bộ hàm khởi tạo ra nó. Mỗi lần hàm được gọi, giá trị của biến chính bằng giá trị tại lần gần nhất hàm được gọi.Biến static sẽ lưu vào vùng nhớ Data/ Bss, được giải phóng khi kết thúc chương trình.

- Ví dụ:
  ```C
 	#include <stdio.h>
	void printMessage() {
    static int count = 0;
    // Tăng giá trị biến mỗi lần hàm được gọi
    count++;
    printf("Count: %d\n", count);
	}

	int main() {
    // Gọi hàm có sử dụng biến static
    printMessage();//
    printMessage();

    return 0;
	}// KQ:Count: 1,Count: 2

  ```

- Biến static toàn cục: Biến toàn cục static sẽ chỉ có thể được truy cập và sử dụng trong File khai báo nó, các File khác không có cách nào truy cập được.globalStaticVar được khai báo là static và nằm trong file "File1.c". Do đó, bạn không thể trực tiếp truy cập nó từ file "File2.c". Nếu bạn thử uncomment dòng extern int globalStaticVar; trong "File2.c", chương trình sẽ không biên dịch được và thông báo lỗi.
- Biến cục bộ: Biến cục bộ sẽ được lưu vào vùng nhớ stack, thu hồi khi kết thúc hàm cục bộ. 

</details>
<details>
  <summary><h3>Struct và Union</h3></summary>

**Struct và Union là 2 cấu trúc dữ liệu do lập trình viên định nghĩa bao gồm các biến với kiểu dữ liệu khác nhau.Tuy nhiên, về mặt lưu trữ trong bộ nhớ, chúng có sự khác biệt rõ rệt như sau:**
**struct:** Dữ liệu của các thành viên của struct được lưu trữ ở những vùng nhớ khác nhau. Do đó kích thước của 1 struct tối thiểu bằng kích thước các thành viên cộng lại tại vì còn phụ thuộc vào bộ nhớ đệm (struct padding).
- Ví dụ:
  ```C 
  #include <stdio.h>
  #include <conio.h>
  struct date
	{
		int d;
		int m;
		long y;
	};
  void main()
	{
		date dat = {4, 4, 2016};
		printf("\nSize of struct: %d", sizeof(date));//size 12
	
		printf("\ndate = %d", dat.d);//date=4
		printf("\nmonth = %d", dat.m);//month =4
		printf("\nyear = %d", dat.y);//year=2016
	
		getch();
	
	} 
	```

**Tại cùng 1 thời điểm run-time, có thể truy cập vào tất cả các thành phần của struct**
**Struct padding :** Chèn thêm các vùng nhớ trống giữa các member để đảm bảo việc dữ liệu trong struct được natually aligned(các thao tác đọc ghi trong bộ nhớ nhanh hơn )
> Ví dụ:
![Struct_Padding](./Struct_Padding.PNG)
![Struct_Padding](./Struct_Padding(2).PNG)
- Như vậy đối với struct B kích thước của nó sẽ là 16 bytes, trong đó có 14 bytes được sử dụng và 2 bytes bị padding. Chúng ta thấy rằng việc sắp xếp thứ tự các phần tử của struct có thể giúp cho việc xử dụng tài nguyên RAM trở lên hiệu quả hơn, tránh bị tốn quá nhiều bytes cho quá trình padding.

	**Sử dụng Struct khi bạn muốn lưu trữ nhiều thông tin có liên quan với nhau:**

	- Ví dụ: Một hồ sơ người dùng có tên, tuổi, địa chỉ, v.v.

	**Khi bạn muốn lưu trữ dữ liệu với các loại dữ liệu khác nhau:**
	- Ví dụ: Một khối dữ liệu đại diện cho một ngày gồm ngày, tháng, năm là các kiểu dữ liệu khác nhau.

	**Khi bạn muốn có một cấu trúc dữ liệu linh hoạt, mà mỗi thành phần có thể được truy cập một cách dễ dàng:**
	- Ví dụ: Các thành phần của một hình học như điểm, đường, v.v.

	**Union : Dữ liệu các thành viên sẽ dùng chung 1 vùng nhớ. Kích thước của union được tính là size lớn nhất của kiểu dữ liệu trong union.**
	 
	- ví dụ 1:
	```C
	#include <stdio.h>
	#include <conio.h>
 
	union date
	{
		int d;
		int m;
		int y;
	};
 
	void main()
	{
		date dat;
	
		printf("\nSize of union: %d", sizeof(date));//4
		dat.d = 24;
		dat.m = 9;
		dat.y = 2014;
	
		printf("\ndate = %d", dat.d);//2014
		printf("\nmonth = %d", dat.m);//2014
		printf("\nyear = %d", dat.y);/2014
	
		getch();
	}
	```
 - Vùng nhớ dành cho union date là 4 byte. Vùng nhớ này sẽ chứa giá trị 24 khi dat.d = 24 được thực hiện. Tiếp đó, 9 sẽ được copy đè vào vùng nhớ này khi dat.m = 9 được thực hiện. Cuối cùng, 2014 được copy đè vào vùng nhớ khi dat.y = 2014 được thực hiện.
 **Tại cùng 1 thời điểm run-time, chỉ có thể truy cập 1 thành phần của union**
- ví dụ 2:
  ```C
  #include <stdio.h>
  #include <conio.h>
  union date
  {
    int d;
    int m;
    int y;
  };
 
  void main()
  {
		date dat;
	
		printf("\nSize of union: %d", sizeof(date));//4
		
		dat.d = 24;
		printf("\ndate = %d", dat.d);//24
	
		dat.m = 9;
		printf("\nmonth = %d", dat.m);//9
	
		dat.y = 2014;
		printf("\nyear = %d", dat.y);//2014
	
		getch();
  }
  ```
- Khác với VD1 ,các giá trị được gọi lần lượt , cứ mỗi lần kết thúc giá trị sẽ có 1 giá trị mới được ghi đè vào

**Sử dụng Union khi bạn muốn tiết kiệm bộ nhớ và chỉ lưu trữ một giá trị tại một thời điểm:**
- Khi bạn gán một thành viên, các giá trị của các thành viên khác sẽ thay đổi.

</details>
<details>
  <summary><h3>Macro,Function</h3></summary>

 **Macro là gì?**

 - Marco là 1 định nghĩa (do lập trình viên đặt tên) trỏ tới 1 khối lệnh thực hiện một chức năng nào đó.

 - Được xử lý bởi preprocessor(tiền xử lý)

 - Định nghĩa macro bằng lệnh #define

 - VD: Preprocessor khi gặp bất kỳ lời gọi SUM(first+last) nào thì thay ngay bằng
 	```C
    #define SUM(a,b)     (a+b)
	int main(){
		printf("tong a,b la %d\n",sum(1,2));
		return 0;
	}
    ```

**Hàm là gì?**
 - Function là 1 khối lệnh thực hiện một chức năng nào đó.
   ```C
   int SUM(int a,int b) {//0xc1 >>0XC7
		return a+b;
   }
	     
   int main(){
		//OX00>>0X04
		printf("tong a,b la %d\n",sum(1,2));//OXO5  //stack pointer:0X05
		printf("tong a,b la %d\n",sum(2,2));//0XO7  //program counter 0xc1
		return 0;
   }
   ```
    

### So sánh Macro, Function:
- Macro đơn giản là chỉ thay thế đoạn code macro vào chỗ được gọi trước khi được biên dịch
- Giả sử 1 macro là 1 byte được gọi 20 lần >> 20 byte trong hàm main ,20 dòng code sẽ được chèn vào  trong quá trình tiền xử lí. Điều này làm cho kích thước của chương trình  to ra >> tốn kich thước nhưng time xử lý ngắn hơn

- khi khởi tạo hàm ,RAM chỉ tốn 1 bộ nhớ cố định để lưu , Giả sử hàm được gọi 20 lần, cũng sẽ chỉ tốn 1 bộ nhớ như vậy. Nhưng khi gọi hàm sẽ mất thời gian để compiler lưu con trỏ chương trình PC hiện tại vào stack; chuyển PC tới hàm được gọi, thực hiện hàm đó xong và lấy kết quả trả về; sau đó quay lại vị trí ban đầu trong stack trước khi gọi hàm và tiếp tục thực hiện chương trình.



</details>
<details>
  <summary><h3>Con trỏ(pointer)</h3></summary>


- Trong ngôn ngữ C/C++, con trỏ (pointer) là những biến lưu trữ địa chỉ bộ nhớ của những biến khác.
- Kích thước của các biến con trỏ có khác nhau không? Con trỏ chỉ lưu địa chỉ nên kích thước của mọi con trỏ là như nhau. Kích thước này phụ thuộc vào môi trường hệ thống máy tính:
		- `Môi trường Windows 32 bit: 4 bytes`
        - `Môi trường Windows 64 bit: 8 bytes`

### Các loại con trỏ:
- ***Con trỏ NULL:*** Con trỏ NULL là con trỏ lưu địa chỉ 0x00000000. Tức địa chỉ bộ nhớ 0, có ý nghĩa đặc biệt, cho biết con trỏ không trỏ vào đâu cả.
	```c
	int *p2; //con trỏ chưa khởi tạo, vẫn trỏ đến một vùng nhớ nào đó không xác định
	int *p3 = NULL; //con trỏ null không trỏ đến vùng nhớ nào
	int *p4 = null; // Lỗi "null" phải viết in hoa
	```
- ***Con trỏ đến con trỏ(pointer to pointer):*** Con trỏ này dùng để lưu địa chỉ của con trỏ khác.
	```c
	int x = 10;
    int *p1 = &x;     // Con trỏ p1 trỏ đến biến x và giá trị của p1 chỉnh là địa chỉ của biến x
    int **p2 = &p1;	 // Con trỏ p2 trỏ đến con trỏ p1 và lưu địa chỉ của con trỏ p1 vào p2  

    printf("Giá trị của x: %d\n", *p1); //Giá trị của x: 10
    printf("Địa chỉ của x: %p\n", p1); //Địa chỉ của x: 0x7ffee2a697a8 
    printf("Giá trị của x: %d\n", **p2); //Giá trị của x: 10
    printf("Địa chỉ của p1: %p\n", p2); //Địa chỉ của p1: 0x7ffee2a697a0
	```
- ***Con trỏ hằng (Constant Pointers):*** Không thể thay đổi giá trị mà nó trỏ tới, nhưng có thể thay đổi địa chỉ mà nó trỏ tới.
	```c
	int num = 10; 
	const int *ptr = &num; //thay đổi được địa chỉ của num nhưng không thay đổi được giá trị '10' của num
	```
- ***Con trỏ void (Void Pointers):*** Con trỏ void có thể trỏ tới bất kỳ kiểu dữ liệu nào, nhưng khi xuất ra giá trị thì phải ép kiểu.
	```c
	int num = 10;
	float f = 3.14;
	void *ptr;
	ptr = &num;
	printf("num = %d\n",(int*)ptr);
	ptr = &f;
	printf("f = %f\n",(float*)ptr);
	```
- ***Con trỏ hàm (Function Pointers):*** Dùng để lưu trữ và gọi các hàm thông qua con trỏ.
	```c
	int add(int a, int b) {
		return a + b;
	}
	int subtract(int a, int b) {
		return a - b;
	}

	int main() {
	
		int (*operation)(int, int) = add;
		int result = operation(5, 3);
		printf("Result: %d\n", result);

		operation = subtract;
		result = operation(5, 3);
		printf("Result: %d\n", result);

		return 0;
	}

	```
- ***Con trỏ vào hàm (Pointers to Functions):*** Lưu trữ địa chỉ của một hàm cụ thể để gọi hàm thông qua con trỏ.
	```C
	int add(int a, int b) {
		return a + b;
	}
	int subtract(int a, int b) {
		return a - b;
	}

	void performOperation(int a, int b, int (*operation)(int, int)) {
		int result = operation(a, b);
		printf("Result: %d\n", result);
	}

	int main() {
		int a = 5, b = 3;

		performOperation(a, b, add);
		performOperation(a, b, subtract);

		return 0;
	}

	```
- ***Con trỏ hàm parameter (Function Pointer Parameters):*** Truyền một hàm như một tham số cho một hàm khác.
	```C
	void greet() {
		printf("Hello, World!\n");
	}

	void performAction(void (*action)()) {
		action();
	}

	int main() {
		performAction(greet);

		return 0;
	}

	```
### Lưu ý khi sử dụng con trỏ
- Khi khởi tạo con trỏ NULL: Chữ NULL phải viết hoa, viết thường null sẽ bị lỗi.
- Không nên sử dụng con trỏ khi chưa được khởi tạo: Kết quả tính toán có thể sẽ phát sinh những lỗi không lường trước được nếu chưa khởi tạo con trỏ.
- Sử dụng biến con trỏ sai cách.

### Tác dụng của con trỏ

- Chúng ta có thể sử dụng con trỏ để thay đổi giá trị vùng con trỏ trỏ đến.
- Giả sử mình khởi tạo 1 biến số c.
```c
int c = 22; // khởi tạo giá trị ban đầu của c = 22
```
- Vậy chúng ta có bao nhiêu cách để thay đổi giá trị biến c.
- Cách 1: thay đổi trực tiếp
`c = 11;`
- Cách 2: thay đổi gián tiếp qua 1 con trỏ
```c
int *pc = &c;    // trỏ con trỏ pc tới vùng nhớ của biến c
*pc = 11;        // *pc tương đương với giá trị của biến c 
```
</details>
