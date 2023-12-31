<details>
<summary><h2>▶ Bài tập ứng dụng</h2></summary>






</details>



<details>
<summary><h2>▶ C Basic</h2></summary>

<details>
<summary><h3>Kiểu dữ liệu</h3></summary>

  ![kieu du lieu](./Kieu_Dulieu(1).PNG)
  ![kieu du lieu](./Kieu_Dulieu(2).PNG)

</details>

<details>
  <summary><h3>Lệnh điều kiện trong C</h3></summary>

  **_Câu lệnh If_**
  - Nếu điều kiện được thỏa mãn thì sẽ thực thi đoạn code bên trong nó.
  `if (điều kiện){
    Khối lệnh sẽ được thực hiện nếu <điều kiện> đúng.
}`

<details>
<summary>Ví dụ:</summary>

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
</details>

**_switch case_**

 - Lệnh switch case là một cấu trúc điều khiển & rẽ nhánh hoàn toàn có thể được thay thế bằng cấu trúc if else. Tuy nhiên, việc sử dụng switch case sẽ giúp code của chúng ta dễ viết và dễ đọc hơn.
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
 - Case default sẽ được thực hiện nếu không có case nào khớp giá trị  

 <details>
<summary>Ví dụ</summary>

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

</details>



**_if và switch :_**
 - if dùng để kiểm tra các điều kiện là toán tử so sánh (<, >, ==, !=, vv.) hoặc các toán tử logic (&&, ||, vv.).
 - switch dùng để so sánh một biểu thức với các giá trị khác nhau. Nó sẽ kiểm tra giá trị và thực hiện các hành động tương ứng với giá trị đó.
 - Switch sẽ so sánh các tính năng khác nhau,mã sạch sẽ hơn và dễ đọc.
 - Nên sử dụng switch case trong bài toán mul-ti choice, biểu thức điều kiện tính toán phức tạp nhưng phải có giá trị nguyên.

</details>
<details>
  <summary><h3>Vòng lặp</h3></summary>

**Vòng lặp for:** 
- Cú pháp:
```C
for ( giá trị ban đầu; điều kiện lặp; thuật toán   )
{
   // các lệnh cần lặp
}
```

 <details>
<summary>Ví dụ</summary>

```C
for (int i =0; i<100; i=i+2 )
{
   printf("test:%d\n",i);
   if(i==50){
	break;// i chạy tới 50 sẽ thoát ra khỏi vòng for
   }
}
```
```C
for (int i =0; i<100; i=i+2 )
{
   
   if(i==50){
	continue;// khi i tới 50 , sẽ bỏ qua 50 , chạy tới giá trị i=52
   }
   printf("test:%d\n",i);
}
```
- Vòng lặp for vô hạn:
```C
int i=0;
for (;; )
{
   i++;
   printf("test:%d\n",i);
   if(i==50){
	beak;// nếu không có break thì vòng lặp chạy vô hạn
   }
   
}
```
 </details>


**Vòng lặp while:**
- Cú pháp:
```C
while ( điều kiện lặp đúng )
{
   // các lệnh cần lặp
}
```
- Ví dụ:
```C
int i =0;
while ( i <10 )
{
   printf("test:%d\n",i);
   i++;   
}
```
- While được sử dụng khi
**Vòng lặp do-while:**
- Cú pháp:
```C
do{
	// các lệnh cần lặp
}
while ( điều kiện lặp đúng );
 
```
 
- do-while :Lệnh làm trước sau đó mới so sánh điều kiện 

  

</details>
<details>
  <summary><h3>Kiểu dữ liệu</h3></summary>

**Biến không đổi (Constant Variables):** 
- Lưu trữ giá trị không thay đổi trong suốt thời gian chương trình chạy.Biến này sẽ lưu vào vùng nhớ TEXT
    ```const int MAX_VALUE = 100;```

**Biến Extern:**
- Từ khóa extern được sử dụng để khai báo một biến mà đã được định nghĩa bên ngoài chương trình hoặc tệp tin.
- Biến extern không tạo ra bộ nhớ mới cho biến.Biến được tham chiếu phải được khai báo toàn cục. 
- Lưu ý: khi sử dụng extern, không được khai báo giá trị ban đầu cho biến

 <details>
<summary>Ví dụ</summary>
- File 1 ta khai báo
```C
int GlobalVariable = 0; // implicit definition 
void SomeFunction(); // function prototype (declaration) 
int main() 
{ 
  GlobalVariable = 1; 
  SomeFunction(); 
  return 0; 
}
```
- File 2, chúng ta extern biến đó để sử dụng

```C
extern int GlobalVariable; // implicit definition 
void SomeFunction(); // function prototype (declaration) 
int main() 
{ 
  GlobalVariable = 1; 
  SomeFunction(); 
  return 0; 
}; 
```
 </details>


**Biến register:**
- Trong các yêu cầu tính toán quan trọng.  Từ khóa register để báo cho chương trình biết một biến sẽ đc lưu trữ trong thanh ghi (register) của CPU để tối ưu hiệu suất, giảm thời gian xử lý.
    `register int counter = 0;`
- Giải thích :Nếu khai báo biến thông thường để tính toán không có từ khóa register , thực hiện một phép tính thì cần có 3 bước.
	- Ví dụ: `int a = 6.Ví dụ :a có địa chỉ là 0X01,  a=a+4`
	- B1:Lưu địa chỉ và giá trị của biến vào bộ nhớ RAM : `0X01=6;` 
	- B2:Sau đó chuyển từ Ram qua thanh ghi(register)
	- B3:Từ register chuyển qua ALU (Arithmetic Logic Unit) ,để tính toán.Sau khi tính toán xong thì lại chuyển ngược về register>> về RAM

- Khi thêm từ khóa register để khai báo biến, biến sẽ được lưu vào register thay vào RAM >> tốc độ xử lý sẽ nhanh hơn
- Hạn chế dùng register vì thanh ghi có giới hạn (32 bit là 4 byte , 64 bit là 8 byte ) >> chỉ lưu những biến quan trọng , cần tính toán nhanh

**Biến volatile:** Thông báo cho trình biên dịch rằng giá trị của biến này không tối ưu , nếu tối ưu thì sẽ không đúng kết quả của người code
- Ví dụ:
```C
   	int main() {
    volatile int sensorValue;

    while (1) {
        // Đọc giá trị từ cảm biến (sensor)
        sensorValue = readSensor();

        // Xử lý giá trị cảm biến
        processSensorValue(sensorValue);
    }

    return 0;
}
```
- Cảm biến thay đổi liên tục, giá trị có thể giống nhau. Tuy nhiên,nếu không có volatile tính năng tối ưu code của compiler, nó sẽ hiểu rằng các biến như vậy dường như không thay đổi giá trị nên compiler có xu hướng loại bỏ để có thể tối ưu kích cỡ file code .
 
**Biến kiểu định danh (Typedef Variables):** Tạo ra một tên mới cho một kiểu dữ liệu đã tồn tại để sử dụng dễ dàng hơn.
```C
    typedef int Integer;
    Integer number = 42;
```



**Biến liệt kê (Enum Variables):** Lưu trữ một trong các giá trị được xác định trước từ một tập hợp các giá trị có tên.
- Thông thường enum đi chung với typedef và switch-case
- Cú pháp:
```C
	typedef enum {
        RED, 
        GREEN,
        BLUE
    } color;
	void hienthi(color mau)
	{
		switch (mau){
			case RED:
			printf("mau do");
			break;
			case BLUE:
			printf("mau xanh");
			break;


		}

	}
		
	int main(){
		color mau;
		mau = red;
		hienthi(mau);
	 
		return 0;
	}

```



**Biến cấu trúc (Structure Variables):** 
- Lưu trữ các thành phần có liên quan vào một biến:

```C
	typedef struct {
    	float x1;
    	float x2;
	} nghiem;// chỗ này định danh lại 
	 
	nghiem ptbac2(int a , int b , int c){
		nghiem test;//nghiem là kiểu dữ liệu , test là biến
		test.x1 =20.3;
		test.x2 =14.2;
		return test;

	}
	int main(){
		nghiem phuongtrinh = ptbac2(2,3,4);
		printf("x1:%f",phuongtrinh.x1);
		printf("x2:%f",phuongtrinh.x2);
	 
		return 0;
	}
```
</details>
<details>
  <summary><h3>Phân vùng bộ nhớ trên RAM, cấp phát bộ nhớ động</h3></summary>
	
### Phân vùng bộ nhớ trên RAM(Memory layout)
- Chương trình main.exe trên window  hoặc main.hex với VĐK (lưu ở bộ nhớ SSD hoặc FLASH). 
- Khi nhấn run chương trình trên window hoặc cấp nguồn cho vi điều khiển thì những chương trình này sẽ được copy vào bộ nhớ RAM để thực thi.


| Stack |
|:-----:|
|   ↓   |
|   ↑   |	
|  Heap |
|  Bss(Uninitialized data)  |
|  Data(Initialized data)   |
|  Text |
- ***Text:*** Quyền truy cập chỉ có thể Read( không thay đổi)
	- Lưu các hằng số :`const int x =2` 
	- Kích thước là cố định
	- Nó chưa lệnh thực thi :Mã assembly...
- ***Data:*** Quyền truy cập Read-Write
	- Chứa biến toàn cục đã dc khởi tạo hoặc biến static khác 0:`int a=1, int b=2;`
	- Được giải phóng khi kết thúc chương trình
	- Kích thước có thể thay đổi
- ***Bss:*** Quyền truy cập Read-Write
	- Chứa biến toàn cục chưa khởi tạo, hoặc bằng 0:`int a=0, int b;`
	- Các biến static bằng 0 hoặc chưa khởi tạo
	- Được giải phóng khi kết thúc chương trình
	- Kích thước có thể thay đổi
- ***Stack:*** Quyền truy cập là Read-Write.
	- lưu trữ các biến cục bộ.
	- Các tham số truyền vào và các giá trị trả về từ hàm.
	- Hàm main cũng ở vùng stack
	- Sẽ được giải phóng khi ra khỏi hàm
	- Kích thước cố định: phụ thuộc vào hệ điều hành, đối với Windows thường là 1MB, Linux là 8MB.
- ***Heap:*** Quyền truy cập là Read-Write.
	- Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc,...
	- Kích thước không cố định.
	- Sẽ được giải phóng khi gọi hàm free,...
	### So sánh Stack và Heap?
	- Bộ nhớ: Bộ nhớ Heap và bộ nhớ Stack bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi.
		- Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào... Truy cập vào bộ nhớ này rất nhanh và được thực thi khi chương trình được biên dịch.
		- Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ được cấp phát động bởi các hàm malloc - calloc - realloc (trong C)
	- Kích thước vùng nhớ:
		- Stack: kích thước của bộ nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành, ví dụ hệ điều hành Windows là 1 MB, hệ điều hành Linux là 8 MB (lưu ý là con số có thể khác tùy thuộc vào kiến trúc hệ điều hành của bạn).
		- Heap: kích thước của bộ nhớ Heap là không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu của chương trình.
	### Các cách sử dụng malloc, calloc, realloc, free:
	- ***Malloc:*** Cấp phát bộ nhớ động mỗi phần tử, không khởi tạo giá trị, trả về con trỏ NULL khi cấp phát thành công.
	- ***Calloc:*** Cấp phát bộ nhớ động và khởi tạo cho các phần tử là 0, trả về con trỏ NULL khi cấp phát thành công.
	- ***Realloc:*** Thay đổi kích thước bộ nhớ của bộ nhớ đã được cấp phát trước đó của Malloc và Calloc, trả về con trỏ NULL khi thay đổi thành công.
	- Vậy `Malloc` sẽ nhanh hơn `Calloc`
	- Ví dụ:

	```C
	int main() {
    int *arr_malloc, *arr_calloc;
    size_t size = 5;

    // Sử dụng malloc
    arr_malloc = (int*)malloc(size * sizeof(int));

    // Sử dụng calloc
    arr_calloc = (int*)calloc(size, sizeof(int));

    // Sử dụng Realloc
	arr_malloc = (int*)realloc(arr_malloc, sizeof(int) * 7); // size arr_malloc lúc này là 7


    // Giải phóng bộ nhớ
    free(arr_malloc);
    free(arr_calloc);

    return 0;
	}
	```
<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{  
    int soluongkytu = 0;
    char* ten = (char*) malloc(sizeof(char) * soluongkytu)
    for (int i = 0; i < 3; i++)
    {
        printf("Nhap so luong ky tu trong ten: \n");
        scanf("%d", &soluongkytu);
        ten = realloc(ten, sizeof(char) * soluongkytu);
        printf("Nhap ten cua ban: \n");
        scanf("%s", ten);
        printf("Hello %s\n", ten);
    }

}

```

</details>


- Đặc điểm vùng nhớ
	- Stack: 
		- vùng nhớ Stack được quản lý bởi hệ điều hành, 
		- Dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong công việc của mình.
	- Heap: k
		- Kích thước của bộ nhớ Heap là không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu ,
		- Dữ liệu trong Heap sẽ không bị hủy khi hàm thực hiện xong, điều đó có nghĩa bạn phải tự tay hủy vùng nhớ bằng câu lệnh free (trong C), và delete hoặc delete [] (trong C++), nếu không sẽ xảy ra hiện tượng rò rỉ bộ nhớ. 
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

- ***Realloc:*** Thay đổi kích thước bộ nhớ của bộ nhớ đã được cấp phát trước đó của Malloc và Calloc, trả về con trỏ NULL khi thay đổi thành công
```C
void* realloc(void* ptr, size_t size);
```
- ***Free:*** Giải phóng bộ nhớ đã được cấp phát bằng Malloc, Calloc, Realloc sau khi sử dụng xong, không có trả về
```C
void free(void* ptr);
```
### Khác nhau của static cục bộ và static toàn cục:

- Biến static cục bộ: Khi 1 biến cục bộ được khai báo với từ khóa static. Biến sẽ chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy chương trình. Giá trị của nó không bị mất đi ngay cả khi kết thúc hàm. Tuy nhiên khác với biến toàn cục có thể gọi trong tất cả mọi nơi trong chương trình, thì biến cục bộ static chỉ có thể được gọi trong nội bộ hàm khởi tạo ra nó. Mỗi lần hàm được gọi, giá trị của biến chính bằng giá trị tại lần gần nhất hàm được gọi.Biến static sẽ lưu vào vùng nhớ Data/ Bss, được giải phóng khi kết thúc chương trình.

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

- Biến static toàn cục: Biến toàn cục static sẽ chỉ có thể được truy cập và sử dụng trong File khai báo nó, các File khác không có cách nào truy cập được.
- Ví dụ:globalStaticVar được khai báo là static và nằm trong file "File1.c". Do đó, bạn không thể trực tiếp truy cập nó từ file "File2.c", bằng extern int globalStaticVar; trong File2.c, chương trình sẽ không biên dịch được và thông báo lỗi.
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
**Giống nhau** : Cả hai được sử dụng để thực hiện một chức năng nào đó và có thể nhận tham số đầu vào
**Khác nhau**:
- Macro không cần quan tâm kiểu dữ liệu của tham số đầu vào
- Function phải chỉ rõ kiểu dữ liệu của tham số đầu vào
- Macro đơn giản là chỉ thay thế đoạn code macro vào chỗ được gọi trước khi được biên dịch .Giả sử 1 macro là 1 byte được gọi 20 lần >> 20 byte trong hàm main ,20 dòng code sẽ được chèn vào trong quá trình tiền xử lí. Điều này làm tốn kich thước nhưng time xử lý ngắn hơn( chỉ copy -paste vào chương trình) .

- khi khởi tạo hàm ,RAM chỉ tốn 1 bộ nhớ cố định để lưu , Giả sử hàm được gọi 20 lần, cũng sẽ chỉ tốn 1 bộ nhớ như vậy. Nhưng khi gọi hàm sẽ mất thời gian để compiler lưu con trỏ chương trình PC hiện tại vào stack pointer; chuyển PC tới hàm được gọi, thực hiện hàm đó xong và lấy kết quả trả về; sau đó quay lại vị trí ban đầu trong stack pointer trước khi gọi hàm và tiếp tục thực hiện chương trình.



</details>
<details>
  <summary><h3>Con trỏ(pointer)</h3></summary>

**Con trỏ là gì** 
- Là 1 biến ,không lưu giá trị bình thường, nó lưu địa chỉ.
- Cách khai báo con trỏ:<kiểu dữ liệu> * <tên biến>
- kiểu dữ liệu con trỏ phải trùng kiểu dữ liệu biến nó trỏ tới.
- Ví dụ:
```C
 int main(){
	int a =10;
	int *ptr =&a;//&lấy địa chỉ
	return 0;
 }

```



- Nếu không dùng con trỏ thì giá trị a,btrong hàm cục bộ sẽ bị thu hồi ,
và giá trị x,y không thay đổi được.
- Ví dụ bài toán hoán vị:
```C
	int swap(int *a, int *b) {
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
		printf("dia chi cua a la : %p\n",a);
		printf("gia tri cua a la : %d\n",*a);
	}
	int subtract(int a, int b) {
		return a - b;
	}

	int main() {
	
		int x,y;
		x=20;y=15;
		swap(&x,&y);
		printf("%d,%d",x,y);

		return 0;
	}
```


- Trong ngôn ngữ C/C++, con trỏ (pointer) là những biến lưu trữ địa chỉ bộ nhớ của những biến khác.
- Kích thước của các biến con trỏ có khác nhau không? Con trỏ chỉ lưu địa chỉ nên kích thước của mọi con trỏ là như nhau. Kích thước này phụ thuộc vào môi trường hệ thống máy tính:
		- `Môi trường Windows 32 bit: 4 bytes`
        - `Môi trường Windows 64 bit: 8 bytes`

### Các loại con trỏ:

- ***Con trỏ hàm (Function Pointers):*** Dùng để lưu trữ và gọi các hàm thông qua con trỏ.
	```c
	void tong (int a, int b){
		printf("tong %d va %d = %d\n",a,b,a+b);
	}
	void hieu (int a, int b){
		printf("tong %d va %d = %d\n",a,b,a-b);
	}

	 

	int main() {
		void (*ptr)(int, int);
		ptr =&tong;
		ptr(8,6);
	 

		return 0;
	}

	```
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
 
<details>
  <summary><h3>Mảng</h3></summary>

**Mảng:**

- Mảng (array) là các phần tử có kiểu dữ liệu đồng nhất. Các phần tử của mảng được lưu trong các vùng nhớ liên tiếp
- Khai báo:
```- Kiểu dữ liệu tên mảng[]={};```
- Ví dụ :

 ```C
	 uint8_t mang[]={1,2,3,4,5};// kieu du lieu 8 bit >> 1 byte ,2 phan tu cach nhau 1 byte, mảng là 1 dãy địa chỉ 

	int main() {
		uint8_t *ptr=mang;// địa chỉ ô nhớ đầu tiên
		printf("gia tri:%d\n",*ptr);// in ra =1
		uint8_t *ptr=mang +1;
		printf("gia tri:%d\n",*ptr);// in ra =2
		
	
		 for(int i=0;i<5;i++){
			printf("Dia chi cua mang[%d]=%p, gia tri:%d",i,&mang[i],*i);
		 }
		// Thông qua con trỏ để biểu diễn mảng
		 for(int i=0;i<5;i++){
			printf("Dia chi cua mang[%d]=%p, gia tri:%d",i,ptr+i,*(ptr+i);
		 }
		return 0;
	}
```
**Chuỗi:**

- Chuỗi là một tập hợp các ký tự (char) được lưu trữ trên các ô nhớ liên tiếp và luôn luôn có 1 ký tự null là \0 báo hiệu kết thúc chuỗi.
- Chú ý : Khi khai báo không để số trong[] , hãy để compiler tự làm
```C
char c[5] = "abcde"; // sai
```

- ví dụ:
 ```C
 	char arr[]="hello word"; 
	void doc_mang(char text[]){
		text[0]='a';
		text[1]='b';
	}
// vì chuỗi là 1 dãy địa chỉ , nếu ta làm như trên, nó sẽ thay đôi 
	

	int main() {
		doc_mang(arr);
		 for(int i=0;i<16;i++){
			printf("ky tu :%c, ma hex :0x%x, ",arr[i],arr[i] );
		 }

	// in ra la "abllo word"
		 
		return 0;
	}
```




</details>
</details>



<details>
  <summary><h2>▶ C Advance </h2></summary>


<details>
  <summary><h3>Quá trình biên dịch</h3></summary>
	
Quy trình biên dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java, C#…) sang  ngôn ngữ máy , để máy tính có thể hiểu và thực thi.
### Quá trình biên dịch bao gồm 4 giai đoạn:
	
**_Pre-processor (Giai đoạn tiền xử lý):_**
- 1 Project có nhiều file:`a.h, b.h, a.c, b.c `và file `main.c` sau quá trình tiền xử lý thành 1 file duy nhất là file `main.i`.
- Lệnh trong CMD là: `gcc -E main.c -o main.i`

**3 việc xảy ra trong quá trình tiền xử lý:**
- `#include` file header, có nghĩa là nội dung file sẽ được chèn vào vị trí mà mình chỉ định.
- Xóa bỏ comment.
- Triển khai macro:
	- Macro là từ dùng để chỉ những thông tin được xử lý ở tiền xử lý.
	- `#define`:
		- Macro được định nghĩa bằng cách sử dụng chỉ thị tiền xử lý #define.
		- Nơi nào có tên Macro sẽ được thay thế bằng nội dung của macro đó.
		- Giảm lặp lại mã ,dễ bảo trì.
		- ví dụ:
		```C
		#define display_sum(a,b) \ // xuống dòng
			printf("this is macro to sum 2 number \n");\
			printf("result is:%d \n",a+b);// dòng cuối cùn không cần\

		int main(){
			display_sum(5,6);
			return 0;
		}
		```
	- `#undef`:
		- Dùng để hủy định nghĩa 1 macro đã dc định nghĩa trước đó bằng `#define`.
		- Lý do là có thể có nhiều file có macro trùng nhau khi include vào file main , nếu không #undef và #define
		sẽ dẫn đến lỗi
		- ví dụ:
		```C
		#include <stdio.h>
		#include "nhietdo.c"
		#include "doam.c"
		// trong 2 file đều có macro lần lượt là:
		//#define cam_bien 10(nhietdo.c)
		//#define cam_bien 20(doam.c)

		int main(){
			#undef cam_bien
			#define cam_bien 40
			return 0;
		}
		```
	- `#if`: Sử dụng để bắt đầu 1 điều kiện xử lý.Nếu đúng thì các dòng lệnh sau `#if` sẽ được biên dịch , sai sẽ bỏ qua đến khi gặp`#endif`.
	- `#elif`: Để thêm 1 ĐK mới khi `#if` hoặc `#elif` sai.
	- `#else`: Dùng khi không có ĐK nào đúng
	- `#ifdef` : Dùng để kiểm tra 1 macro định nghĩa hay chưa.Nếu định nghĩa rồi thì mã sau ifdef sẽ được biên dịch.
	- `#ifndef`: Dùng để kiểm tra 1 macro định nghĩa hay chưa.Nếu chưa định nghĩa thì mã sau ifndef sẽ được biên dịch.Thường dùng để kiểm tra macro đó đã dc định nghĩa trong file nào chưa, kết thúc thì `#endif`
	- Ví dụ:
	```C
		#include <stdio.h>
		#define DEBUG_MODE 1

		int main() {
			int x = 5;

			#if DEBUG_MODE
				printf("Debug mode is enabled.\n");
			#endif

			#if DEBUG_MODE
				printf("The value of x is: %d\n", x);
			#endif

			printf("Program continues...\n");

			return 0;
		}
	```
	- 1 số toán tử trong Macro: 
		- #define STRINGSIZE(x) #x
		- Ví dụ:
			```C
			#define STRINGSIZE(x) #x
			#define DATA 40

			int main(){
				prinf("the value: %s\n",STRINGSIZE(DATA));
				return 0;
			// sẽ in ra the value: DATA
			}
			```
		- Variadic Macro: Là 1 macro cho phép nhận 1 số lượng biến tham số có thể thay đổi
		<details>
		<summary>Ví dụ:</summary>
		
		```C

			#include <stdio.h>

			#define print_menu_item(...) \
				do { \
					const char *items[] = {__VA_ARGS__}; \
					int n = sizeof(items) / sizeof(items[0]); \
					for (int i = 0; i < n; i++) { \
						print_menu_item(i + 1, items[i]); \
					} \
				} while (0)

			#define case_option(number, function) \
				case number: \
					function(); \
					break;

			#define handle_option(option, ...) \
				switch (option) { \
					__VA_ARGS__ \
					default: \
						printf("Invalid option!\n"); \
				}

			void print_menu_item(int number, const char *item) {
					printf("%d. %s\n", number, item);
				}

			void feature1() { printf("Feature 1 selected\n"); }
			void feature2() { printf("Feature 2 selected\n"); }
			void feature3() { printf("Feature 3 selected\n"); }
			void feature4() { printf("Feature 4 selected\n"); }

			int main() {
				print_menu_item("Option 1", "Option 2", "Option 3", "Option 4", "Exit");

				int option;
				scanf("%d", &option);

				handle_option(option,
							case_option(1, feature1)
							case_option(2, feature2)
							case_option(3, feature3)
							case_option(4, feature4)
				)

				return 0;
		```
		</details>

- **_Compiler (Giai đoạn dịch NNBC sang ngôn ngữ Assembly):_** 
	-  Quá trình này compiler sẽ biên dịch từ file `.i` sang file ngôn ngữ assembly là file `.s`.
	-  Dùng lệnh `gcc -S main.i -o main.s`.
- **_Assembler (Giai đoạn dịch ngôn ngữ Assembly sang ngôn ngữ máy):_** compiler sẽ Biên dịch ngôn ngữ Assembly sang ngôn ngữ máy (0 và 1). Và tạo ra tệp tin Object `.o` 
	-  Dùng lệnh `gcc -c main.s -o main.o` để tạo ra file ".o"  
- **_Linker (Giải đoạn liên kết):_** 
	- 1 hoặc nhiều file.o sẽ được compiler liên kết lại 1 File  `.exe`.
	- File này để hệ điều hành chạy
	- Dùng lệnh `gcc  main.o -o filename` để tạo ra tệp thực thi .

</details>
<details>
  <summary><h3>Stdargt - Assert</h3></summary>

- **Stdargt:** 
- Cú pháp: `#include<stdarg.h`
- Mục đích:Dùng trong 1 hàm mà không cần biết chính xác có bao nhiêu tham số đầu vào.

<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list args;// đây là 1 kiểu dữ liệu ,để lưu 1 địa chỉ 
    va_start(args, count);//count để xác định  giá trị ban đầu 
	//trong trường hợp này là 4....

    int result = 0;
    for (int i = 0; i < count; i++) {
        result += va_arg(args, int);// ép kiểu dữ liệu 
    }	

    va_end(args);

    return result;
}

int main() {
    printf("Sum: %d\n", sum(4, 1, 2, 3, 4));// sum:10 , vì cout =4>> truyền vào 4 tham số
    return 0;
}

```

</details>

<details>
<summary>Ví dụ 2:</summary>

```C++
#include <stdio.h>
#include <stdarg.h>


typedef struct Data
{
    int x;
    double y;
} Data;

void display(int count, ...) {

    va_list args;

    va_start(args, count);

    int result = 0;

    for (int i = 0; i < count; i++)
    {
        Data tmp = va_arg(args,Data);
        printf("Data.x at %d is: %d\n", i,tmp.x);
        printf("Data.y at %d is: %f\n", i,tmp.y);
    }
   

    va_end(args);


}

int main() {


    display(3, (Data){2,5.0} , (Data){10,57.0}, (Data){29,36.0});
    return 0;
}

```
</details>
<details>
<summary>Ví dụ 3:</summary>

- Bài toán thực tế, làm sao viết 1 hàm chung , để phù hợp với bất kỳ số lượng tham số đầu vào.
- cảm biến độ ẩm 2 tham số , nhiệt độ 3 tham số >> cần 1 hàm phù hợp 

```C
#include <stdio.h>
#include <stdarg.h>

typedef enum {
    TEMPERATURE_SENSOR,
    PRESSURE_SENSOR
} SensorType;// đầu tiên định nghĩa 1 enum

void processSensorData(SensorType type, ...) {
    va_list args;
    va_start(args, type);

    switch (type) {
        case TEMPERATURE_SENSOR: {// khi có bài toán lựa chọn thì dùng switch..case
            int numArgs = va_arg(args, int);
            int sensorId = va_arg(args, int);
            float temperature = va_arg(args, double); // float được promote thành double
            printf("Temperature Sensor ID: %d, Reading: %.2f degrees\n", sensorId, temperature);
            if (numArgs > 2) {
                // Xử lý thêm tham số nếu có
                char* additionalInfo = va_arg(args, char*);
                printf("Additional Info: %s\n", additionalInfo);
            }
            break;
        }
        case PRESSURE_SENSOR: {
            int numArgs = va_arg(args, int);
            int sensorId = va_arg(args, int);
            int pressure = va_arg(args, int);
            printf("Pressure Sensor ID: %d, Reading: %d Pa\n", sensorId, pressure);
            if (numArgs > 2) {
                // Xử lý thêm tham số nếu có
                char* unit = va_arg(args, char*);
                printf("Unit: %s\n", unit);
            }
            break;
        }
    }

    va_end(args);
}

int main() {
    processSensorData(TEMPERATURE_SENSOR, 3, 1, 36.5, "Room Temperature");
    processSensorData(PRESSURE_SENSOR, 2, 2, 101325);
    return 0;
}

```
</details>

- **assert:** 
	- Cung cấp macro assert. 
	- Macro này được sử dụng để kiểm tra một điều kiện. 
	- Nếu điều kiện đúng (true), không có gì xảy ra và chương trình tiếp tục thực thi.
	- Nếu điều kiện sai (false), chương trình dừng lại và thông báo một thông điệp lỗi.
	- Dùng trong debug, dùng #define NDEBUG để tắt debug
	- Tóm lại, assert thường được sử dụng để kiểm tra điều kiện và kết thúc chương trình khi có lỗi 
<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
#include <assert.h>
int main() {   
	int x = 5;    
	assert(x == 5);    // Chương trình sẽ tiếp tục thực thi nếu điều kiện là đúng.
	printf("X is: %d", x);  
	return 0;
}

```
</details>

-Thông thường trong thực tế sẽ code:
<details>
<summary>Ví dụ:</summary>

```C
#define LOG(condition, cmd) assert(condition && #cmd);
int main{
	int x=0;
	LOG(x>5,x phai lon hon 5);
}
```

Hoặc

```C
#include <assert.h>
#define ASSERT_IN_RANGE(val, min, max) assert((val) >= (min) && (val) <= (max))

void setLevel(int level) {
    ASSERT_IN_RANGE(level, 1, 31);
    // Thiết lập cấp độ
}
int main(){
	int x=45;
	int day =5;
	ASSERT_IN_RANGE	(day,0,31);// day <31 thì sẽ thực hiện code tiếp theo
	//sai thì thông báo 
	printf("day bang %d\n",day);

}

```
</details>

</details>
<details>
  <summary><h3>Pointer</h3></summary>

- Con trỏ (pointer) là một biến chứa địa chỉ bộ nhớ của một biến khác. Việc sử dụng con trỏ giúp chúng ta thực hiện các thao tác trên bộ nhớ một cách linh hoạt hơn.
- Thông qua con trỏ có thể thay đổi giá trị tại biến mà nó trỏ tới

- Cách khai báo:

```C
int x = 10;
int *ptr = &x;  // ptr giờ đây chứa địa chỉ của x
*ptr =5;
>> x bằng5
```
- Kích thước của con trỏ phụ thuộc vào kiến trúc máy tính và trình biên dịch.
- `Môi trường Windows 32 bit: 4 bytes`
- `Môi trường Windows 64 bit: 8 bytes`

```C
int main()
{
    int *ptr;
    printf("Size of pointer: %d bytes\n", sizeof(ptr));    
    return 0;

}

```
- Ứng dụng để truyền tham trị .
<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>

// Hàm swap: Đổi giá trị của hai biến sử dụng con trỏ
void swap(int *a, int *b)
{
    int tmp = *a;   // Lưu giá trị của biến a vào biến tạm thời tmp
    *a = *b;        // Gán giá trị của biến b cho biến a
    *b = tmp;       // Gán giá trị của biến tạm thời tmp (ban đầu là giá trị của a) cho biến b
}

// Hàm main: Hàm chính của chương trình
int main()
{
    int a = 10, b = 20; // Khai báo và khởi tạo hai biến a và b

    swap(&a, &b);       // Gọi hàm swap để đổi giá trị của a và b

    // In ra giá trị của a và b sau khi đã đổi giá trị
    printf("value a is: %d\n", a);
    printf("value b is: %d\n", b);

    return 0; // Kết thúc chương trình
}

```
</details>

**Con trỏ hàm**

- Pointer to function (con trỏ hàm) là một biến giữ địa chỉ của một hàm.Có nghĩa nó trỏ đến vùng nhớ chứa mã máy của hàm được định nghĩa
- Có thể sử dụng con trỏ hàm để truy cập và gọi hàm từ một địa chỉ bộ nhớ cụ thể.
- Cú pháp:
`kiểu dữ liệu (*tên con trỏ hàm)(kieu du liêu1, kieu du liêu2)` 
- kiểu dữ liệu trùng với kiểu dữ liệu của hàm trỏ tới.
- Nếu cần truyền tham số thì kiểu dữ liệu 1 ,2 trùng với hàm truyền vào.
 
```C
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*sum)(int, int); // Khai báo con trỏ hàm
    sum = add;            // Gán địa chỉ của hàm add cho con trỏ sum

    printf("Sum: %d\n", sum(3, 4)); // Gọi hàm thông qua con trỏ hàm

    return 0;
}
```

**Hàm con trỏ**
- Hàm con trỏ là một hàm mà tham số của nó là một con trỏ hàm.
- Điều này cho phép bạn truyền một hàm cụ thể vào một hàm khác để thực hiện các tác vụ động linh hoạt
<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
// Hàm con trỏ làm tham số cho một hàm khác
void processNumbers(int (*operation)(int, int), int a, int b) {
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

// Hàm mẫu 1
int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 10, b = 5;
    processNumbers(add, a, b);
    

    return 0;
}
```
</details>

**Con trỏ void**
- Void Pointer  là một kiểu đặc biệt của con trỏ ,nó có thể trỏ đến bất kỳ địa chỉ nào mà không cần biết tới kiểu dữ liệu của giá trị tại địa chỉ đó.
- Cách ép kiểu dữ liệu từ con trỏ Void:`(int*)(ptr)` đang ép về kiểu int.
- Dùng trong bài toán , nhiều kiểu dữ liệu mà không muốn dùng nhiều loại con trỏ trỏ tới chúng .
- Trong ví dụ bên dưới, con trỏ ptr trỏ tới tất cả các biến.
<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int main() {
   
    char array[] = "Hello";
    int value = 5;
    double test = 15.7;
    char letter = 'A';
   
    void *ptr = &value;
    printf("value is: %d\n", *(int*)(ptr));

    ptr = &test;
    printf("value is: %f\n", *(double*)(ptr));

    ptr = &letter;
    printf("value is: %c\n", *(char*)(ptr));

    ptr = sum;
    printf("sum: %d\n", ((int (*)(int,int))ptr)(5,6));

    void *ptr1[] = {&value, &test, &letter , sum, array};

    printf("value: %d\n", *(int*)ptr1[0]);

    printf("value: %c\n", *((char*)ptr1[4]+1));

    return 0;
}

```
</details>

**Con trỏ hằng- Pointer to Constant**
- Khai báo:`const　<Kiểu dữ liệu>　* <Tên con trỏ>;`
- không thể thay đổi giá trị tại biến mà nó đang trỏ đến.
- Ứng dụng:Trong bài toán thao tác với mảng, lý do arr trả về địa chỉ ,là 1 con trỏ , có thể thay đổi giá trị thông qua địa chỉ .
- So sánh:

| Con trỏ thường | Con trỏ hằng|
|-------|-------|
| Có thể thay đổi giá trị | không thể thay đổi giá trị |

```C
 int *ptr;// con trỏ thường
 const int *ptr1;//con trỏ hằng
 x=5;
 ptr=&x;
 *ptr=10;
 printf("x la %d",x);//x =10
 *ptr1 =10;//lỗi , vì nó làm thay đổi giá trị biến
```
**Hằng con trỏ- Constant Pointer**
- Khai báo:`int *const const_ptr = &value;`
- Đặc điểm:
	- Khi khai báo hằng con trỏ cần khởi tạo giá trị địa chỉ cho nó.
	- Khi hằng con trỏ đã trỏ đến 1 địa chỉ nào rồi,nó không thể trỏ tới bất kỳ 1 địa chỉ nào khác.
	- Có thể thay đổi được giá trị tại địa chỉ đã khởi gán ban đầu.

<details>
<summary>Ví dụ:</summary>

```C
#include <stdio.h>
#include <stdlib.h>
int main() {    
	int value = 5;    
	int test = 15;    
	int *const const_ptr = &value;   
	printf("value: %d\n", *const_ptr);    
	*const_ptr = 7   
	printf("value: %d\n", *const_ptr);   
	const_ptr = &test; // LỖI vì đã cố định vào value
	return 0;
}
```

</details>


**Pointer to Pointer**
- là một kiểu dữ liệu trong ngôn ngữ lập trình cho phép bạn lưu trữ địa chỉ của một con trỏ. 
- Con trỏ đến con trỏ cung cấp một cấp bậc trỏ mới, cho phép bạn thay đổi giá trị của con trỏ gốc. 
- Cấp bậc này có thể hữu ích trong nhiều tình huống, đặc biệt là khi bạn làm việc với các hàm cần thay đổi giá trị của con trỏ.

<details>
<summary>Ví dụ:</summary>

```C
int test = 5;	//Address: 0x01
			 	//Value:	5
int *ptr = &test;//Address: 0x02
			 	//Value:	0x01
int **ptr1=&ptr;//Address: 0x03
			 	//Value:	0x01

#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1 = &x;  // Con trỏ ptr1 trỏ đến biến x
    int **ptr2 = &ptr1;  // Con trỏ ptr2 trỏ đến con trỏ ptr1

    printf("Địa chỉ x: %p\n", &x);   //Địa chỉ x: 0x7ffe88cb3ab4
    printf("gia tri ptr1: %p\n", ptr1);//gia tri ptr1: 0x7ffe88cb3ab4
    printf("Địa chỉ con trỏ ptr1: %p\n", &ptr1);//Địa chỉ con trỏ ptr1: 0x7ffe88cb3ab8
    printf("Giá trị của ptr2 (địa chỉ của ptr1): %p\n", ptr2)//Giá trị của ptr2 (địa chỉ của ptr1): 0x7ffe88cb3ab8

    return 0;
}

```
</details>

**NULL Pointer**
- Khai báo:`int *ptr = NULL; `
- NULL pointer là một con trỏ không trỏ đến bất kỳ vùng nhớ cụ thể nào.
- Trong vđk khởi tạo con trỏ phải gán NULL
- Trước khi xài thì phải kiểm tra nó là NULL hay không.
- Lý do nếu kiểm tra không phải là NULL thì con trỏ đang trỏ tới 1 giá trị nào đó ,Tránh dereferencing (sử dụng giá trị mà con trỏ trỏ đến) làm sai chương trình.
- Khi xài xong 1 pointer thì phải gán nó bằng Null, để tránh sử dụng giá trị cũ của con trỏ.

<details>
<summary>Ví dụ:</summary>

```C

#include <stdio.h>
int main() {
    int *ptr = NULL;  // Gán giá trị NULL cho con trỏ 0x0000000

    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    } else {
        printf("Pointer is not NULL\n");
    }

    int score_game = 5;
    if (ptr == NULL)
    {
        ptr = &score_game;
        *ptr = 30;
        ptr = NULL;
    }
}

```
</details>


</details>
<details>
  <summary><h2>▶ Từ khóa đặc biệt trong C </h2></summary>

- Biến cục bộ là biến tồn tại trong các hàm :Hàm main() , hàm con.Biến cục bộ sẽ được lưu vào vùng nhớ stack, thu hồi khi kết thúc hàm. 
- Biến toàn cục là các biến được khai báo ở bên ngoài tất cả các hàm , Biến toàn cục tồn tại cho tới khi chương trình kết thúc.


### Khác nhau của static cục bộ và static toàn cục:

**Biến static cục bộ:** 
- Khi 1 biến cục bộ được khai báo với từ khóa static. Biến sẽ chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy chương trình. 
- Giá trị của nó không bị mất đi ngay cả khi kết thúc hàm
- Biến static sẽ lưu vào vùng nhớ Data/ Bss, được giải phóng khi kết thúc chương trình.

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

**Biến static toàn cục:**  
- Biến toàn cục static sẽ chỉ có thể được truy cập và sử dụng trong File khai báo nó, các File khác không có cách nào truy cập được.Nghĩa là `extern` không dùng được
- Ví dụ:globalStaticVar được khai báo là static và nằm trong file "File1.c". Do đó, bạn không thể trực tiếp truy cập nó từ file "File2.c", bằng extern int globalStaticVar; trong File2.c, chương trình sẽ không biên dịch được và thông báo lỗi.

**Biến Extern:**
- Trong C, khi 1 biến đi sau từ khóa “extern” có nghĩa:
- Từ khóa extern được sử dụng để khai báo một biến,hàm mà đã được định nghĩa bên ngoài chương trình hoặc tệp tin.
- Biến extern không tạo ra bộ nhớ mới cho biến , tiết kiệm dung lượng chương trình
- Biến được tham chiếu phải được khai báo toàn cục.
- Lưu ý: khi sử dụng extern, không được khai báo giá trị ban đầu cho biến

 <details>
<summary>Ví dụ</summary>

- File 1 ta khai báo

```C
int GlobalVariable = 0; // implicit definition 
void SomeFunction(); // function prototype (declaration) 
int main() 
{ 
  GlobalVariable = 1; 
  SomeFunction(); 
  return 0; 
}
```
- File 2, chúng ta extern biến đó để sử dụng

```C
extern int GlobalVariable; // implicit definition 
void SomeFunction(); // function prototype (declaration) 
int main() 
{ 
  GlobalVariable = 1; 
  SomeFunction(); 
  return 0; 
}; 
```
 </details>



**Biến register:**
- Từ khóa register được dùng để khai báo các biến có tính chất như biến cục bộ nhưng mà nó được lưu trong thanh ghi của CPU. Do nó được lưu trong thanh ghi nên tốc độ xử lý sẽ nhanh hơn so với các biến được lưu trong Ram.
    `register int counter = 0;`
- Hạn chế dùng register vì thanh ghi có giới hạn (32 bit là 4 byte , 64 bit là 8 byte ) >> chỉ lưu những biến quan trọng , cần tính toán nhanh
- Giải thích :Nếu khai báo biến thông thường để tính toán không có từ khóa register , thực hiện một phép tính thì cần có 3 bước.
	- Ví dụ: `int a = 6.Ví dụ :a có địa chỉ là 0X01,  a=a+4`
	- B1:Lưu địa chỉ và giá trị của biến vào bộ nhớ RAM : `0X01=6;` 
	- B2:Sau đó chuyển từ Ram qua thanh ghi(register)
	- B3:Từ register chuyển qua ALU (Arithmetic Logic Unit) ,để tính toán.Sau khi tính toán xong thì lại chuyển ngược về register>> về RAM



**Biến volatile:** Thông báo cho trình biên dịch rằng giá trị của biến này không tối ưu , nếu tối ưu thì sẽ không đúng kết quả của người code.
- Sử dụng volatile với biến có giá trị thay đổi từ bên ngoài , liên tục và giống nhau.Nếu không có volatile, compiler sẽ hiểu rằng các biến như vậy dường như không thay đổi giá trị nên compiler có xu hướng loại bỏ để có thể tối ưu kích cỡ file code .
- Ví dụ:
```C
   	int main() {
    volatile int sensorValue;

    while (1) {
        // Đọc giá trị từ cảm biến (sensor)
        sensorValue = readSensor();

        // Xử lý giá trị cảm biến
        processSensorValue(sensorValue);
    }

    return 0;
}
```

</details>
 
<details>
  <summary><h2>▶ Goto_setjmp</h2></summary>

**Goto:**
- goto là một từ khóa trong ngôn ngữ lập trình C, cho phép chương trình nhảy đến một nhãn (label) đã được đặt trước đó trong cùng một hàm.

 <details>
<summary>Ví dụ</summary>

```C
#include <stdio.h>
int main() {    
	int i = 0;   // Đặt nhãn    start        
	if (i >= 5) {           
		goto end;  // Chuyển control đến nhãn "end"       
		}       
		printf("%d ", i);        
		i++;        
		goto start;  // Chuyển control đến nhãn "start"    		 
		end: // Nhãn "end"       
		printf("\n");
		return 0;
	}
```

</details>

**Setjmp.h:**
- `setjmp.h` là một thư viện trong ngôn ngữ lập trình C, chứa các hàm setjmp và longjmp được sử dụng để xử lý các tình huống ngoại lệ.
- Khi điều kiện là sai, chúng không dừng chương trình lại như assert, mà thay vào đó chúng tạo ra một cơ hội để nhảy đến một điểm nhảy trước đó đã được đánh dấu bởi setjmp
- `setjmp` sẽ lưu điểm đánh dấu chương trình ngoại lệ .
- `longjmp` được sử dụng để nhảy đến một điểm  đã được đánh dấu bởi setjmp.

 <details>
<summary>Ví dụ</summary>

```C

#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;//jmp_buf là kiểu dữ liệu trong thư viện Setjmp.h
int exception_code;

#define TRY if ((exception_code = setjmp(buf)) == 0) 
#define CATCH(x) else if (exception_code == (x)) 
#define THROW(x) longjmp(buf, (x))


double divide(int a, int b) {
    if (b == 0) {
        THROW(1); // Mã lỗi 1 
    }
    return (double)a / b;
}

int main() {
    int a = 10;
    int b = 0;
    double result = 0.0;

    TRY {
        result = divide(a, b);
        printf("Result: %f\n", result);
    } CATCH(1) {
        printf("Error: Divide by 0!\n");
    }


    // Các xử lý khác của chương trình
    return 0;
}


```

</details>

</details>

<details>
  <summary><h2>▶ Bitmask </h2></summary>

**Khái niệm**:
- Bitmask là một kỹ thuật sử dụng các bit để lưu trữ  trạng thái. Có thể sử dụng bitmask để đặt, xóa và kiểm tra trạng thái của các bit cụ thể trong một từ  
- Bitmask thường được sử dụng để tối ưu hóa bộ nhớ
- khi muốn Set 1 bit tại ví trí chỉ cần dịch bit 1 tới vị trí Cần SET và OR với iá trị hiện tại
- Khi muốn Clear bit tai vị tri chỉ cần dịch bit 1 tới vị trí cần Clear , đảo ngược hết bit đó  và AND với giá trị hiện tại
- Ví dụ:

```C
	uint8_t x = 0;/0X0000 0000
	// Muốn set tại vị tri 1 
	x = x | (1 << 1);//0x0000 0001
	x = x & ~(1 << 1);0x0000 0000



```
<details>
<summary>Ví dụ 1 </summary>

```C

#include <stdio.h>
#include <stdint.h>


#define GENDER        1 << 0  // Bit 0: Giới tính (0 = Nữ, 1 = Nam)
#define TSHIRT        1 << 1  // Bit 1: Áo thun (0 = Không, 1 = Có)
#define HAT           1 << 2  // Bit 2: Nón (0 = Không, 1 = Có)
#define SHOES         1 << 3  // Bit 3: Giày (0 = Không, 1 = Có)
// Tự thêm 5 tính năng khác
#define FEATURE1      1 << 4  // Bit 4: Tính năng 1
#define FEATURE2      1 << 5  // Bit 5: Tính năng 2
#define FEATURE3      1 << 6  // Bit 6: Tính năng 3
#define FEATURE4      1 << 7  // Bit 7: Tính năng 4

void enableFeature(uint8_t *features, uint8_t feature) {
    *features |= feature;
}

void disableFeature(uint8_t *features, uint8_t feature) {
    *features &= ~feature;
}


int isFeatureEnabled(uint8_t features, uint8_t feature) {
    return (features & feature) != 0;
}

void listSelectedFeatures(uint8_t features) {
    printf("Selected Features:\n");

    if (features & GENDER) {
        printf("- Gender\n");
    }
    if (features & TSHIRT) {
        printf("- T-Shirt\n");
    }
    if (features & HAT) {
        printf("- Hat\n");
    }
    if (features & SHOES) {
        printf("- Shoes\n");
    }
    // Thêm các điều kiện kiểm tra cho các tính năng khác
}

void removeFeatures(uint8_t *features, uint8_t unwantedFeatures) {
    *features &= ~unwantedFeatures;
}


int main() {
    uint8_t options = 0;

    // Thêm tính năng 
    enableFeature(&options, GENDER | TSHIRT | HAT);

    removeFeatures(&options, TSHIRT);

    // Liệt kê các tính năng đã chọn
    listSelectedFeatures(options);
    
    return 0;
}

```

</details>

<details>
<summary>Ví dụ 2 </summary>
```	X=C```
#include <stdio.h>

#define LED1 1 << 0 // 0001
#define LED2 1 << 1 // 0010
#define LED3 1 << 2 // 0100
#define LED4 1 << 3 // 1000


void enableLED(unsigned int *GPIO_PORT, unsigned int LED) {
    *GPIO_PORT |= LED;
}

void disableLED(unsigned int *GPIO_PORT, unsigned int LED) {
    *GPIO_PORT &= ~LED;
}


int main() {
    unsigned int GPIO_PORT = 0; // Giả sử là biến điều khiển cổng GPIO

    // Bật LED1 và LED3
    enableLED(&GPIO_PORT, LED1 | LED3);
    if (GPIO_PORT & LED1 )
    {
        printf("LED1 is on\n");
    }

    if (GPIO_PORT & LED2)
    {
        printf("LED2 is on\n");
    }

    if (GPIO_PORT & LED3)
    {
        printf("LED3 is on\n");
    }
    
    // Tắt LED1 và bật LED2
    disableLED(&GPIO_PORT, LED1);
    enableLED(&GPIO_PORT, LED2);

    if (GPIO_PORT & LED1 )
    {
        printf("LED1 is on\n");
    }

    if (GPIO_PORT & LED2)
    {
        printf("LED2 is on\n");
    }

    if (GPIO_PORT & LED3)
    {
        printf("LED3 is on\n");
    }

    // Cập nhật trạng thái của GPIO_PORT tương ứng với hardware

    return 0;
}

</details>


</details>
<details>
  <summary><h3>▶Struct - Union </h2></summary>

**Struct:**
- Struct là một kiểu dữ liệu chứa nhiều kiểu dữ liệu khác trong nó , kích thước của struct bằng kích thước các thành viên bên trong + phần padding.
- Ví dụ:
![Struct](./Hinhanh/Struct.PNG)
- Tổng Example là 8 byte , 7 byte dữ liệu + 1 byte trống 
![Struct](./Hinhanh/Struct1.PNG)
- Tổng Example là 12 byte ,  7 byte dữ liệu + 5 byte trống
![Struct](./Hinhanh/Struct2.PNG)
- Tổng Example là 24 byte ,cơ bản là tốn time tính

##Mục đích tính toán struct,để tối ưu bộ nhớ,nếu sắp xếp các phần tử không hợp lý sẽ tốn bộ nhớ.


**Union:**
- Union là một kiểu dữ liệu chứa nhiều kiểu dữ liệu khác trong nó ,kích thước của struct bằng kích thước thành viên lớn nhất và cùng 1 vùng nhớ.
![Union](./Hinhanh/Union.PNG)
![Union](./Hinhanh/union1.jpg)
- Tổng Example là 20 byte , thằng nào lớn nhất thì lấy thằng đó

##Mục đích sử dụng  Union ,để tiết kiệm bộ nhớ ,vì 1 thời điểm chỉ có thể sử dụng 1 member. 
- Ứng dụng đọc 1 cảm biến trong nhiều cảm biến.
- Nếu cùng 1 mục đích mà sử dụng struct sẽ tốn nhiều dung lượng hơn.
![Union](./Hinhanh/Union3.PNG)
- Ví dụ trên nếu dùng struct thì 8 byte , trong khi union chỉ 4 byte


</details>























</details>
<details>
  <summary><h2>▶ C++ programming language</h2></summary>

<details>
  <summary><h3>C++ cơ bản</h3></summary>

 ```C++
	#include <iosteam>// thư viện c++
 	using namespace std;
 
	

	int main() {
		int x;
		cout<<"nhap vao x:";// nhập dữ liệu
		cin>>x;// xuất dữ liệu
		 
		return 0;
	}
```
</details>
<details>
  <summary><h3>Class</h3></summary>
	
### Class là gì?
- Class là 1 kiểu dữ liệu do người dùng định nghĩa
- Ví dụ:
```C++
class sinhvien {
	puplic:
	string ten;
	int tuoi;
	int mssv;
	int lop;
};

void display(sinhvien sv){
	count<<"ten:"<<sv.ten<<endl;
	count<<"tuoi:"<<sv.tuoi<<endl;
	count<<"mssv:"<<sv.lop<<endl;

}
int main(){
	sinhvien sv1;
	sv1.ten ="hoang";
	sv1.tuoi=19;
	display(sv1);

	return 0;

}
```

- Biến trong class gọi là `PROPERTY`.
- sv1.tuoi... trong ví dụ gọi là `OBJECT` thuộc class sinhvien.
- Hàm trong class gọi là `METHOD`.
- Class có thể định nghĩa cả hàm , struct thì không:
- Biến static trong class
- Khi định nghĩa static trong class thì phải khởi tạo lần đầu ở ngoài.
- Khi khởi tạo thì địa chỉ của nó tồn tại trong suốt chương trình nên member static này của các object sẽ đều có cùng 1 địa chỉ.
```C++
class sinhvien {
	puplic:// phạm vi truy cập
	string ten;//PROPERTY
	int tuoi;
	int mssv;
	void display(){//METHOD
	count<<"ten:"<<ten<<endl;
	count<<"tuoi:"<<tuoi<<endl;
	count<<"mssv:"<<mssv<<endl;

}
};

int main(){
	sinhvien sv1;
	sv1.ten ="hoang";//OBJECT thuộc class sinh viên
	sv1.tuoi=19;
	sv1.mssv =123123;
	sv1.display();// in ra 

	return 0;

}

```
- Class có thể khởi tạo giá trị ban đầu:
```C++
class sinhvien {
	puplic:// phạm vi truy cập
	sinhvien(string l_ten , int l_tuoi,string l_lop, int l_ngay){// gia tri ban đầu có tham số đầu vào
		static int  s_mssv;
		mssv=s_mssv;
		s_mssv ++;
		tuoi =l_tuoi;
		ten=l_ten;
		lop=l_lop;
		ngay =l_ngay;
	}
	string ten;//PROPERTY
	stactic int ngay; // static trong class phải khởi tạo giá trị ban đầu 
	int tuoi;
	int mssv;
	string lop;
	string ten;
	void display();//METHOD
	
	//director là 1 cơ chế tự động 
	~sinhvien(){
		count<<"Huy object co ten:"<<ten>>endl;
	}
};

int sinhvien::ngay;// khởi tạo gia trị ban đầu cho static

void sinhvien::display{
	count<<"ten:"<<ten<<endl;
	count<<"tuoi:"<<tuoi<<endl;
	count<<"mssv:"<<mssv<<endl;
	ount<<"lop:"<<mssv<<endl;

}
void test1(){
	sinhvien sv1("thai",19,"CDEE"),sv2("tha",20,"fhsjd",14);//sv1 là OBJECT thuộc class sinhvien
	printf("dia chi sv1.mssv: %p\n",&(sv1.mssv));//khác địa chỉ
	printf("dia chi sv2.mssv: %p\n",&(sv2.mssv));//khác địa chỉ
	printf("--------------");
	printf("dia chi sv1.ngay: %p\n",&(sv1.ngay));//cung  địa chỉ
	printf("dia chi sv2.ngay: %p\n",&(sv2.ngay));//cung địa chỉ
	// Khi khởi tạo thì địa chỉ của nó tồn tại trong suốt chương trình nên member static này của các object sẽ đều có cùng 1 địa chỉ.
	sv1.display();
	sv2.display();	
}

int main(){
	test1();
	return 0;
	// sẽ in ra là ten,tuoi,mssv,lop,Huy object co ten thai
}
```

</details>
<details>
  <summary><h3>namespace</h3></summary>

**Namespace: tạo những vùng nhớ khác nhau ,mỗi namespace là 1 chương trình riêng ,với 2 namespace khác nhau có thể tạo các biến trùng tên. Nhưng trong 1 namespace không thể có 2 biến cùng tên.**

<details>
<summary>Ví dụ:</summary>

```C++
#include<iostream>
using namespace std;

namespace onga{
	int teo =10;
	voi test(){
		printf("test onga");
	}
	class sinhvien{
		puplic:
		void hienthi(){

			printf("sinhvien");
		}
	};
}

namespace ongb{
	int teo =20;
	int arr[]={1,3,4,5};
}

int main(){
	cout<<"con ong a: teo="<<onga::teo<<endl;//con ong a: teo=10
	cout<<"con ong b: teo="<<onga::teo<<endl;//con ong b: teo=20
	return 0;
	/ 
}
```
**Dùng using namespace tên, có thể rút gọn code**
- Ví dụ:
```C++
using namespace onga;
int main(){
	cout<<"con ong a: teo"<<teo<<endl;
	return 0;
	
}
```
</details>

</details>
<details>
  <summary><h3>Hướng đối tượng </h3></summary>

### Đặc tính của lập trình hướng đối tượng:
**Phạm vi truy cập:**
- Public:Member nào trong Public thì object có thể trỏ trực tiếp được và nội tại trong class cũng sử dụng được .
- protected:Member trong protected thì Class con có thể trỏ tới được
- private: Chỉ có nội tại trong class mới sử dụng được.Lý do đặt PROPERTY trong private, để chắc chắn object không trỏ tới được.

**Encapsulation (Tính đóng gói):**
- Object không được phép truy cập PROPERTY từ phạm vi public
- PROPERTY nằm ở private hoặc protected.
- Để truy cập PROPERTY phải thông qua method.
- Lý do phức tạo vì nếu không thông qua method để tránh lỗi tùy trường hợp mà coder quy ước (xử lý tham số nhập vào, lấy dữ liệu ra...)

<details>
<summary>Ví dụ:</summary>

```C++
#include<iostream>
#include<string>
using namespace std;
class doituong{
	private:
	int tuoi;//PROPERTY
	string ten;

	public:
	void hienthi(){//hienthi() method
	    cout<<"ten: "<<ten<<endl;
		cout<<"tuoi: "<<tuoi<<endl;
	}
	void setten(int name){
		ten=name;
	}
	void settuoi(int old){
		tuoi=old;
	}
	int gettuoi(){
		return tuoi;

	}
	string getten(){
		return ten;

	}
	

}
int main(){
	doituong dt;//dt là object thuộc class doituong
	dt.hienthi();
	return 0;
 }
```
</details>

**Inheritance (Tính kế thừa ):**
- Một class có thể kế thừa các thuộc tính của một class khác đã tồn tại trước đó.
Khi một class con được tạo ra bởi việc kế thừa thuộc tính của class cha thì chúng ta sẽ gọi class con đó là subclass trong C++, và class cha chính là superclass trongC++.

<details>
<summary>Ví dụ:</summary>

```C++
using namespace std;

class doituong{

	protected:
	int namsinh;
	string ten;
	int tuoi;
	public:
	void nhapthongtin(string name,int old,int year){ 
	    	ten=name;
			tuoi=old;
			namsinh=year;
	}
	void hienthi(){//hienthi() method cha
	    	cout<<"ten: "<<ten<<endl;
			cout<<"tuoi: "<<tuoi<<endl;
			cout<<"namsinh: "<<namsinh<<endl;
	}

};

class sinhvien : public doituong{
    protected:
	int MSSV;
	public:
	void setMSSV(int mssv){
		MSSV=mssv;
	}
	void hienthi(){// là method con từ cha và sửa nó thì được gọi là override(ghi đè)
		cout<<"MSSV: "<<MSSV<<endl;
		cout<<"ten: "<<ten<<endl;
		cout<<"tuoi: "<<tuoi<<endl;
		cout<<"namsinh: "<<namsinh<<endl;
		

	}

};


class HS : public sinhvien{
    private:
	int HS;
	public:
	void setHS(int hs){
		HS=hs;
	}
	void hienthi();

};
//thằng HS sẽ kế thừa thằng gần nhất >> hienthi(), sẽ kế thừa hienthi() của sinhvien chứ không phải doituong
int main(void){
    doituong dt;
	sinhvien sv;
	dt.nhapthongtin("hung",24,1883);
	dt.hienthi();
	printf("-----------\n");
	sv.nhapthongtin("thai",25,1992);
	sv.hienthi();

    return 0;
}
//ten: hung
//tuoi: 24
//namsinh: 1883
-----------
//MSSV: 0
//ten: thai
//tuoi: 25
//namsinh: 1992

```
</details>

- Các kiểu kế thừa: public,private và protected .Thì private là không  dùng vì class con kế thừa private sẽ đưa tất cả property từ class cha vào private. Làm cho các class tiếp theo không thể truy cập vào được( private chỉ cho phép nội tại class trỏ tới)
<details>
<summary>Ví dụ:</summary>

```C++
class doituong{
	protected:
	int namsinh;
	string ten;
	int tuoi;
	public:
	void nhapthongtin(string name,int old,int year){ 
	    	ten=name;
			tuoi=old;
			namsinh=year;
	}

};

class sinhvien : private doituong{	
	// tất cả property  của doituong sẽ chuyển vào private của sinhvien
 

};

class hs : private sinhvien{
 // lỗi vì thằng private không kế thừa và sử dụng được từ class con
};

```

</details>
**Polymorphism (Tính đa hình):**
- Các method có thể trùng tên với nhau , nhưng phải khác các input parameter
<details>
<summary>Ví dụ:</summary>

```C++
using namespace std;

class toanhoc{

	protected:
	int namsinh;
	void tong(int a,int b ){ 
	    	printf("tong a+b :%d\n",a+b);
	}
	void hienthi(int a,int b ,int c){ 
		printf("tong a+b+c :%d\n",a+b+c);
	}
	int hienthi(int a,double b){ 		
		return a +(int)b;
	}
};

int main(void){
	toanhoc th;
	th.tong(7,4);
	th.tong(5,3,5);
	printf("tong:%d\n",th.tong(5,6.7));

}
```
</details>

**Template trong C++ là gì?**
- Là một kiểu dữ liệu trừu tượng tổng quát hóa cho các kiểu dữ liệu int, float, double, bool...

<details>
<summary>Ví dụ</summary>

```C++	
void hienthi(int a,int b ,int c){ 
		printf("tong a+b+c :%d\n",a+b+c);
}
int hienthi(int a,double b){ 		
		return a +(int)b;
}
//thay vì dài như vậy ta có thể dùng Template do C++ hỗ trợ
//Code viết lại:
template <typename test>
test tong(test a,test b){
	return test(a +b);
}
int main(void){
	tong("tong a va b: %d\n",tong(6,4));
	tong("tong a va b: %f\n",tong(6.5,4.4));
} 
```
</details>

**Abstraction (Tính trừu tượng):**
- Những thành phần bị ẩn đi trong quá trình tạo ra kết quả .
- Về cơ bản tính trừu tượng khác tính đóng gói :
 - Tính đóng gói: property được khai báo ở private .
 - Tính trừu tượng : Các thành phần khác được khai báo ở private.
<details>
<summary>Ví dụ</summary>

```C++
using namespace std;
typedef struct{
	float X1;
	float X2;
}nghiem;

class ptbac2{

	private:
		int A;// tính đóng gói
		int B;
		int C;
		float delta ( ) {// tính trừu tượng
			return B*B -4A*C;
		}
	public:
		void input(int a, int b , int c){
			A=a;
			B=b;
			C=c;
		}
		nghiem ketqua()
		{	
			if delta()>0 {
				//câu lệnh
			}
			else{
				//câu lênh;
			}

		}
 
};

int main(void){
	ptbac2 pt;
	pt.input();
	pt.ketqua();
	 

}
```
</details>

**Virtual trong C++ là gì?**
- Được sử dụng để tạo hàm ảo. Hàm ảo cho phép lớp con ghi đè hàm của lớp cha  . 
- Khi gọi hàm từ con trỏ hoặc tham chiếu đối tượng cơ sở, chương trình sẽ chọn hàm của lớp con nếu nó đã được định nghĩa. 

<details>
<summary>Ví dụ</summary>

```C++
using namespace std;

class Shape {
protected:
    int canh;
    int chieucao;
    float dientich;
    float chuvi;

public:
    virtual void calculateArea() {
        dientich = 0; 
        cout << "Diện tích: " << dientich << endl;
    }

    virtual void calculatePerimeter() {
        chuvi = 0; 
        cout << "Chu vi: " << chuvi << endl;
    }
};

class Circle : protected Shape {
protected:
    int bankinh;

public:
    Circle(int r) : bankinh(r) {}
    //tương đương:  Circle(int r) {
       //bankinh = r;}
    void calculateArea() override {
        dientich = 3.14 * bankinh * bankinh;
        cout << "Dien tich " << dientich << endl;
    }

    void calculatePerimeter() override {
        chuvi = 2 * 3.14 * bankinh;
        cout << "Chu vi: " << chuvi << endl;
    }
};
class Rectangle  : protected Shape {
protected:
    int chieudai;
    int chieurong;

public:
    Rectangle(int a,int b) : chieudai(a), chieurong(b) {}

    void calculateArea() override {
        dientich = chieudai * chieurong;
        cout << "Dien tich " << dientich << endl;
    }

    void calculatePerimeter() override {
        chuvi = 2 * (chieudai+chieurong);
        cout << "Chu vi: " << chuvi << endl;
    }
};

int main(void) {
    Circle tron(5);
    Rectangle dai(4,5);
    tron.calculateArea();
    tron.calculatePerimeter();
    cout<<"------------"<<endl;
    dai.calculateArea();
    dai.calculatePerimeter();
    return 0;
}

```
</details>


</details>
<details>
  <summary><h3>Vector </h3></summary>

**Vector trong C++ là gì?**
- Thư viện #include <vector>
- Là 1 mảng được hỗ trợ bới nhiều method 
- Cú pháp:

```C++
	vector <int>mang ={1,4,5,2,5,3}; 
	mang.insert(mang.begin()+1,788);// vị trí thứ 1
	mang.erase(mang.begin()+4);
	mang.clear();
	for(int i = 0;i<mang.size();i++){
		cout<<"i= "<<mang[i]<<endl;
	}
	return 0;


```
1. push_back(): Hàm đẩy một phần tử vào vị trí sau cùng của vector. Nếu kiểu của
đối tượng được truyền dưới dạng tham số trong push_back() không giống với kiểu
của vector thì sẽ bị ném ra.
ten-vector.push_back(ten-cua-phan-tu);
2. assign(): Nó gán một giá trị mới cho các phần tử vector bằng cách thay thế các
giá trị cũ.
ten-vector.assign(int size, int value);
3. pop_back(): Hàm pop_back () được sử dụng để xóa đi phần tử cuối cùng một
vector.
4. insert(): Hàm này chèn các phần tử mới vào trước phần tử trước vị trí được trỏ
bởi vòng lặp. Chúng ta cũng có thể chuyển một số đối số thứ ba, đếm số lần phần tử
được chèn vào trước vị trí được trỏ.5. erase(): Hàm được sử dụng để xóa các phần tử tùy theo vị trí vùng chứa
6. emplace(): Nó mở rộng vùng chứa bằng cách chèn phần tử mới vào
7. emplace_back(): Nó được sử dụng để chèn một phần tử mới vào vùng chứa
vector, phần tử mới sẽ được thêm vào cuối vector
8. swap(): Hàm được sử dụng để hoán đổi nội dung của một vector này với một
vector khác cùng kiểu. Kích thước có thể khác nhau.
9. clear(): Hàm được sử dụng để loại bỏ tất cả các phần tử của vùng chứa vector

<details>
<summary>Ví dụ quan trọng</summary>

```C++
#include <iostream>
#include <string>
#include <vector>

#define in 0
#define intb 1
#define add 2
#define del 3
#define fix 4
#define rs 5
#define out 6


 

using namespace std;

class sinhvien {
protected:
    string tensv;
    int tuoisv;
    int idsv;
    float diemtoansv;
    float diemlysv;
    float diemhoasv;
    float diemtrungbinhsv;

public:
    sinhvien() : tuoisv(0), idsv(0), diemtoansv(0.0), diemlysv(0.0), diemhoasv(0.0), diemtrungbinhsv(0.0) {}

    sinhvien(string name, int old, int id, float diemtoan, float diemly, float diemhoa)
        : tensv(name), tuoisv(old), idsv(id), diemtoansv(diemtoan), diemlysv(diemly), diemhoasv(diemhoa) {}

    void nhapthongtinsv() {
        cout << "Nhap ten sinh vien: ";
        cin.ignore();
        getline(cin, tensv);

        cout << "Nhap tuoi sinh vien: ";
        cin >> tuoisv;

        do {
        cout << "Nhap diem toan sinh vien (0>>10): ";
        cin >> diemtoansv;
        } while (diemtoansv < 0 || diemtoansv >10 );
        
       

        do {
            cout << "Nhap diem ly sinh vien (0>>10): ";
            cin >> diemlysv;
        } while (diemlysv < 0 || diemlysv > 10);

        do {
            cout << "Nhap diem hoa sinh vien (0>>10): ";
            cin >> diemhoasv;
        } while (diemhoasv < 0 || diemhoasv > 10);
    }

    float diemtrungbinh() {
        diemtrungbinhsv = (diemtoansv + diemlysv + diemhoasv) / 3;
        return diemtrungbinhsv;
    }

    string layXepLoai()  {
        float dtb = diemtrungbinh();
        if (dtb > 8) {
            return "Gioi";
        } else if (dtb >= 6.5 && dtb < 8) {
            return "Kha";
        } else {
            return "TB";
        }
    }

    string layThongTin()  {
        return "Ten: " + tensv + "\nTuoi: " + to_string(tuoisv) + "\nID: " + to_string(idsv) +
               "\nDiem Toan: " + to_string(diemtoansv) + "\nDiem Ly: " + to_string(diemlysv) +
               "\nDiem Hoa: " + to_string(diemhoasv) + "\nDiem Trung Binh: " + to_string(diemtrungbinhsv) +
               "\nXep loai: " + layXepLoai();
    }

    int layIdSV()  {
        return idsv;
    }
    void setIdSV(int newId) {
        idsv = newId;
    }
 
};

class danhsachSV {
private:
    vector<sinhvien> danhsachsinhvien;
    static int maxId ;
    

public:
   
    void xoasv(int id) {
        int n = danhsachsinhvien.size();
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (danhsachsinhvien[i].layIdSV() == id) {
                found = true;
                // Xóa sinh viên tại vị trí i
                danhsachsinhvien.erase(danhsachsinhvien.begin() + i);
                cout << "Da xoa sinh vien co ID " << id << endl;

            break;  
            }   
        }  
        if (!found) {
        cout << "Khong tim thay sinh vien co ID " << id << endl;   
        }

    }

    void suaThongTinSV(int id) {
        int n = danhsachsinhvien.size();
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (danhsachsinhvien[i].layIdSV() == id) {
                found = true;
                cout << "Nhap thong tin moi cho sinh vien:\n";
                sinhvien svMoi;
                svMoi.nhapthongtinsv();
                svMoi.diemtrungbinh();
                danhsachsinhvien[i] = svMoi;
                cout << "Da cap nhat thong tin cho sinh vien co ID " << id << endl;

                break;  
            }
        }

        if (!found) {
            cout << "Khong tim thay sinh vien co ID " << id << endl;
        }
    }


    void sapXepTheoDiemTB() {
        int n = danhsachsinhvien.size();
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                 
                if (danhsachsinhvien[j].diemtrungbinh() > danhsachsinhvien[j + 1].diemtrungbinh()) {                  
                    sinhvien temp = danhsachsinhvien[j];
                    danhsachsinhvien[j] = danhsachsinhvien[j + 1];
                    danhsachsinhvien[j + 1] = temp;
                }
            }
        }
    }

    void inThongTinDanhSach() const {
        for (auto sv : danhsachsinhvien) {
            cout << sv.layThongTin() << endl;
            cout << "-------------" << endl;
        }
    }

    void nhapThemSV() {
        sinhvien sv;
        maxId++;
        sv.setIdSV(maxId);
        sv.nhapthongtinsv();
        sv.diemtrungbinh();
        danhsachsinhvien.push_back(sv);
    }
    
    void reset(){
        danhsachsinhvien.clear();


    }
};

int danhsachSV::maxId = 0;

int main() {
    danhsachSV dssv;
    int nhapkey;
    int i_id;
    
    int soluongsv;

    do {
        cout << "Nhap so luong sinh vien (khong duoc am): ";
        cin >> soluongsv;
    } while (soluongsv < 0);

    for (int i = 0; i < soluongsv; i++) {
        dssv.nhapThemSV();
    }
    do {
        cout << "Vui long lam theo huong dan: "<< endl;
        cout << "Nhap 0:In ra danh sach sinh vien "<< endl;
        cout << "Nhap 1:In ra danh sach sinh vien theo diem TB"<< endl;
        cout << "Nhap 2:them sinh vien va in ra theo diem TB"<< endl;
        cout << "Nhap 3:xoa sinh vien va in ra theo diem TB"<< endl;
        cout << "Nhap 4:sua sinh vien va in ra theo diem TB"<< endl;
        cout << "Nhap 5:reset chuong trinh"<< endl;
        cout << "Nhap 6:thoat chuong trinh"<< endl;
    
    
        cin >> nhapkey;
        switch (nhapkey)
        {
        case  in:
            cout << "Danh sach sinh vien:"<< endl;;
            dssv.inThongTinDanhSach();
            break;

        case  intb:
            dssv.sapXepTheoDiemTB();
            cout << "Danh sach sinh vien sau khi sap xep theo diem trung binh:"<< endl;;
            dssv.inThongTinDanhSach();
            break;

        case add:
            dssv.nhapThemSV(); 
            dssv.inThongTinDanhSach();  
            break;

        case del:
            cout << "vui long nhap id sinh vien can xoa:"<< endl;;
            cin >> i_id;
            dssv.xoasv(i_id);
            dssv.inThongTinDanhSach();  
            break;

        case fix:
            cout << "vui long nhap id sinh vien can sua:"<< endl;;
            cin >> i_id;
            dssv.suaThongTinSV(i_id); 
            dssv.inThongTinDanhSach();  
            break;
        case rs:
            cout << "reset tat ca du lieu" << endl;
            dssv.reset();
            break;
        case out:
            cout << "Thoat chuong trinh" << endl;
            break;
        
        default:
            cout << "Lua chon khong hop le. Vui long nhap lai"<< endl;
            break;
        }
    }
    while (nhapkey!=6);
 
    return 0;

}


```
</details>

</details>
<details>
  <summary><h3>1 số chú ý</h3></summary>


**cin.ignore:**
- cin.ignore() để nhập các dữ liệu kiểu string , các kiểu khác thì không cần
```C++
string tensv;
int tuoi;
cout << "Nhap ten sinh vien: ";
cin.ignore();
getline(cin, tensv);

cout << "Nhap tuoi sinh vien: ";
cin >> tuoisv;

```
**khi nào nên dùng/không dùng class kế thừa**

- Nên dùng: Khi một lớp B được miêu tả là "B là một A". Ví dụ: một lớp hình tròn có thể kế thừa từ một lớp hình học.
- Không nên:Mối quan hệ "has-a" (có một) diễn ra khi một lớp chứa một đối tượng của một lớp khác. ví dụ: danhsachSV chứa một đối tượng sinhvien, do đó chúng ta có thể nói danhsachSV "có" hoặc "bao gồm" danh sách các sinh viên.

</details>



</details>


<details>
  <summary><h2>▶ Embedded</h2></summary>

<details>
  <summary><h3>1 Số câu hỏi PV</h3></summary

**sự khác biệt giữa vi điều khiển và vi xử lý**
- Bộ vi điều khiển tích hợp CPU, bộ nhớ và các thiết bị ngoại vi trên một con chip duy nhất, được thiết kế riêng cho các tác vụ cụ thể.
- Bộ vi xử lý tập trung vào tính toán đa năng, yêu cầu các thành phần bên ngoài để tạo nên một hệ thống hoàn chỉnh.
**Giải thích các phần tử của vi điều khiển.**
- Một bộ vi điều khiển thường bao gồm CPU (Bộ xử lý trung tâm), RAM (Bộ nhớ truy cập ngẫu nhiên), ROM (Bộ nhớ chỉ đọc), bộ hẹn giờ và các thiết bị ngoại vi như GPIO, UART, SPI, I2C, ADC, DAC, PWM, timers/counters...

**Thư viện tĩnh so với thư viện động..**
 - Thư viện tĩnh :Liên kết mã máy vào chương trình khi biên dịch. Hiệu suất tốt, không phụ thuộc vào thư mục khác khi chạy.Nhược điểm: Kích thước lớn, cần biên dịch lại toàn bộ khi thay đổi.
- Dynamic Library: Liên kết vào chương trình khi chạy, không nằm trong chương trình chính.Tiết kiệm không gian lưu trữ, dễ cập nhật mà không cần biên dịch lại chương trình. Cần có thư viện động tương ứng, hiệu suất có thể thấp hơn một chút.

**TTại sao không nên sử dụng đệ quy trong các hệ thống nhúng?**
- Sử dụng đệ quy có thể dẫn đến tràn bộ nhớ stack (stack overflow) trong các hệ thống nhúng. Điều này có thể làm cho chương trình bị dừng đột ngột .
- Đảm bảo có điều kiện dừng hợp lý, là quan trọng khi sử dụng đệ quy trong lập trình


</details>

	
<details>
  <summary><h3>Các giao thức (Protocols)</h3></summary>

<details>
  <summary><h4>SPI protocol</h4></summary>

- Các bit dữ liệu được truyền nối tiếp nhau và có xung clock đồng bộ.
- Giao tiếp song công, có thể truyền và nhận cùng một thời điểm.
- Khoảng cách truyền ngắn, được sử dụng để trao đổi dữ liệu với nhau giữa các chip trên cùng một bo mạch.
- Giao tiếp 1 Master với nhiều Slave.
- Tốc độ truyền khoảng vài Mb/s.
- Các dòng vi điều khiển thường được tích hợp module giao tiếp SPI dùng để giao tiếp truyền dữ liệu với các vi điều khiển khác, hoặc giao tiếp với các ngoại vi bên ngoài như cảm biến, EEPROM, ADC, LCD, SD Card,…

![Connect with orther](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ed/SPI_single_slave.svg/800px-SPI_single_slave.svg.png)

![Connect with orther](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fc/SPI_three_slaves.svg/350px-SPI_three_slaves.svg.png)
- ***SCLK (Serial Clock):*** Xung clock phát ra từ master
- ***MOSI (Master Out Slave In):*** Truyền data từ `master` đến `slave`. Chân `MOSI` ở `master` sẽ kết nối đến chân `MOSI` ở `slave`.
- ***MISO (Master In Slave Out):*** Truyền data từ `slave` đến `master`. Chân `MISO` ở `master` sẽ kết nối đến chân `MISO` ở `slave`.
- ***CS/SS (Chip/Slave Select):*** Chân CS được master sử dụng để lựa chọn slave cần giao tiếp. Master chỉnh chân SS xuống mức 0 để chọn slave truyền data.

![Connect with orther](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/SPI_8-bit_circular_transfer.svg/500px-SPI_8-bit_circular_transfer.svg.png)
Khung truyền SPI:
- Mỗi chip Master hay Slave sẽ có một thanh ghi dữ liệu 8 bit chứa dữ liệu cần gửi hoặc dữ liệu nhận.
- Bắt đầu quá trình, master sẽ kéo chân CS của slave muốn giao tiếp xuống 0 để báo hiệu muốn truyền nhận.
- Mỗi xung clock, Master sẽ gửi đi 1 bit từ thanh ghi dịch (Shift Register) của nó đến thanh ghi dịch của Slave thông qua đường MOSI. Đồng thời Slave cũng gửi lại 1 bit đến cho Master qua đường MISO.Như vậy sau 8 chu kỳ clock thì hoàn tất việc truyền và nhận 1 byte dữ liệu.

- Trong giao tiếp SPI, chỉ có thể có 1 Master nhưng có thể 1 hoặc nhiều Slave cùng lúc. Ở trạng thái nghỉ, chân SS của các Slave ở mức 1, muốn giao tiếp với Slave nào thì ta chỉ việc kéo chân SS của Slave đó xuống mức 0.


![Connect with orther](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6b/SPI_timing_diagram2.svg/400px-SPI_timing_diagram2.svg.png)
- Có 4 chế độ hoạt động:
  	| Mode | CPOL | CPHA |
  	|:---:|:---:|:---:|
  	|0|0|0|
  	|1|0|1|
  	|2|1|0|
  	|3|1|1|
- CPOL = 0: Bắt đầu 1 chu kì là xung cạnh lên.
- CPOL = 1: Bắt đầu 1 chu kì là xung cạnh xuống.
- CPHA = 0: Bit dữ liệu đầu ra sẽ rơi vào cạnh xung đầu tiên của chu kì.
- CPHA = 1: Bit dữ liệu đầu ra sẽ rơi vào cạnh xung thứ hai của chu kì.
- CPOL = 0 , CPHA = 0 là mặc định.
### Ưu, nhược điểm của chuẩn giao tiếp SPI.
- Ưu điểm:
  - Không có Start bit và Stop bit như trong giao tiếp I2C và giao tiếp UART. Vì vậy dữ liệu có thể được truyền liên tục mà không bị gián đoạn
  - Không có hệ thống định địa chỉ slave phức tạp như I2C
  - Tốc độ truyền dữ liệu cao hơn I2C (nhanh gần gấp đôi)
  - Các dòng MISO và MOSI riêng biệt, vì vậy dữ liệu có thể được gửi và nhận cùng một lúc
- Nhược điểm:
  - Sử dụng bốn dây (I2C và UART sử dụng hai dây).
  - Không xác nhận rằng dữ liệu đã được nhận thành công.
  - Không có hình thức kiểm tra lỗi như bit chẵn lẻ (Parity bit) như trong UART.
  - Chỉ cho phép một master duy nhất.

### SPI trong STM32F407VET6.
**SPI Software:**
- Trên mỗi dòng vi điều khiển khác nhau module SPI khác nhau, đấy gọi là SPI cứng (hardware SPI). Như vậy bản chất chuẩn truyền thông SPI giống nhau trên mỗi chip nhưng lại được cài đặt và sử dụng không giống nhau. 
- Để khắc phục nhược điểm trên, có 1 cách lập trình giả lập SPI cứng đó là “SPI mềm”. Thực chất SPI mềm là cách “mô phỏng” bằng cách tạo ra một giao thức truyền thông giống SPI.

- Bước đầu, ta định nghĩa cho 4 chân sử dụng cho SPI và cấp xung CLK:
<details>
		<summary>Software:</summary>
    
```C
// định nghĩa chân
#define SPI_SCK GPIO_Pin_0	// output
#define SPI_NSS GPIO_Pin_1	// ouput
#define SPI_MOSI GPIO_Pin_2	// ouput
#define SPI_MISO GPIO_Pin_3 // input
#define SPI_GPIO GPIOA
// cấp xung CK
void RCC_Config(){
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
	
}
// cấu hình chân
void GPIO_Config(){
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = SPI_SCK| SPI_MOSI| SPI_NSS;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(SPI_GPIO, &GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = SPI_MISO;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(SPI_GPIO, &GPIO_InitStructure);

}
// cấu hình timer
void TIM_Config(){
TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
	TIM_TimeBaseInitStruct.TIM_Prescaler = 16800-1;
	TIM_TimeBaseInitStruct.TIM_Period = 0xFFFF-1; 
	TIM_TimeBaseInitStruct.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStruct);
	TIM_Cmd(TIM2, ENABLE);
}
// hàm delay
void delay_ms(uint32_t time){
	
	TIM_SetCounter(TIM2,0);
	while(TIM_GetCounter(TIM2) < time*10);
}
// Mode truyền 
Void Clock(){
	GPIO_WriteBit(SPI_GPIO, SPI_SCK, Bit_SET);
	delay_ms(2);
	GPIO_WriteBit(SPI_GPIO, SPI_SCK, Bit_RESET);
	delay_ms(2);
}
//Hàm truyền ở master:
void SPI_Master_Transmit(uint8_t u8Data){
	uint8_t u8Mask = 0x80;
	uint8_t tempData;
	GPIO_WriteBit(SPI_GPIO, SPI_NSS, Bit_RESET);
	delay_ms(1);
	for(int i=0; i<8; i++){
		tempData = u8Data & u8Mask;
		if(tempData){
			GPIO_WriteBit(SPI_GPIO, SPI_MOSI, Bit_SET);
			delay_ms(1);
		} else{
			GPIO_WriteBit(SPI_GPIO, SPI_MOSI, Bit_RESET);
			delay_ms(1);
		}
		u8Data=u8Data<<1;
		Clock();
	}
	GPIO_WriteBit(SPI_GPIO, SPI_NSS, Bit_SET);
	delay_ms(1);
}
uint8_t array[] = {7, 8, 4, 2};

int main(){
	RCC_Config();
	GPIO_Config();
	TIM_Config();
	
	while(1){
		for(uint8_t i = 0; i< 8; i++){
				SPI_Master_Transmit(array[i]);
				delay_ms(1000);
		}
	}

}
```
</details>

**SPI Hardware:**
- Dựa vào tài liệu nhà sản xuất ta cấu hình chân:\
![STM43F4_AF](./Hinhanh/STM32F4_AF.PNG)
 
<details>
		<summary>Hardware</summary>

```C
// Slayer Hardware
// DỰA VÀO PHẦN CỨNG STM32
#define SPI1_NSS 	GPIO_Pin_4
#define SPI1_SCK	GPIO_Pin_5
#define SPI1_MISO 	GPIO_Pin_6
#define SPI1_MOSI 	GPIO_Pin_7
#define SPI1_GPIO 	GPIOA
 

void RCC_Config(){
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1,ENABLE);
}

void delay (uint32_t time){
	uint32_t i;
	for (i = 0; i< time; i++){
	}
	
}

void GPIO_Config(){
  // Cấu hình chân GPIO là chân AF (Alternate Function)
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin = SPI1_NSS|SPI1_SCK|SPI1_MISO|SPI1_MOSI;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_Init(SPI1_GPIO,&GPIO_InitStruct); 
   // Cấu hình Alternate Function cho các chân SPI
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource5, GPIO_AF_SPI1);
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource6, GPIO_AF_SPI1);
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource7, GPIO_AF_SPI1);

}
void SPI_Config(){
	SPI_InitTypeDef SPI_InitStruct;
  // Cấu hình SPI ở chế độ Slave
	SPI_InitStruct.SPI_Mode = SPI_Mode_Slave;
	SPI_InitStruct.SPI_Direction = SPI_Direction_2Lines_FullDuplex; 
	SPI_InitStruct.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;
	SPI_InitStruct.SPI_CPOL = SPI_CPOL_Low;//CPOL = 0,  chưa truyền thì ở mức thấp
	SPI_InitStruct.SPI_CPHA = SPI_CPHA_1Edge;//CPHA = 0
	SPI_InitStruct.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStruct.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStruct.SPI_CRCPolynomial = 7;
	SPI_InitStruct.SPI_NSS = SPI_NSS_Soft;
	SPI_Init(SPI1, &SPI_InitStruct);
	SPI_Cmd(SPI1,ENABLE);
	
}
uint8_t SPI_Receive1byte(void){
	volatile uint8_t temp;
   // Đợi SPI không bận và đọc dữ liệu
	while(SPI_I2S_GetFlagStatus(SPI1,SPI_I2S_FLAG_BSY)==1);
	temp = (uint8_t)SPI_I2S_ReceiveData(SPI1);
	return temp;
}
uint8_t i = 0;
uint8_t data[4];
int main ()
{
		
		RCC_Config();
		GPIO_Config();
		SPI_Config();
		
		while(1)
		{	
		 
			while(SPI_I2S_GetFlagStatus(SPI1,SPI_I2S_FLAG_RXNE)== 0);//hỏi sau
			if(GPIO_ReadInputDataBit(SPI1_GPIO, SPI1_NSS ) == 0){
					data[i] = SPI_Receive1byte();
					i++;
					if(i > 3){ 
						i = 0;
					}
			} 

		}
}

```
</details>








</details>

<details>
  <summary><h4>I2C protocol</h4></summary>

- I2C (Inter-Integrated Circuit) là một giao thức truyền thông nối tiếp đồng bộ. Nên các bit dữ liệu truyền đi được đồng bộ hóa với xung nhịp do Master điều khiển.
- Hỗ trợ nhiều Master và Slave trên một đường truyền

![Connect with orther](https://upload.wikimedia.org/wikipedia/commons/thumb/3/3e/I2C.svg/220px-I2C.svg.png)

- I2C chỉ sử dụng hai dây để truyền dữ liệu giữa các thiết bị:
  - SDA (Serial Data) - đường truyền cho master và slave để gửi và nhận dữ liệu.
  - SCL (Serial Clock) - đường mang tín hiệu xung nhịp.

### Cách hoạt động:

![Connect with orther](https://www.circuitbasics.com/wp-content/uploads/2016/01/Introduction-to-I2C-Message-Frame-and-Bit-2.png)

- Dữ liệu được truyền trong các `Message`, mỗi `Message` có một `khung địa chỉ` nhị phân chứa địa chỉ của `Slave` và một hoặc nhiều `khung dữ liệu` chứa dữ liệu đang được truyền.
- Trong mỗi thông điệp bao gồm điều kiện `Start` và `Stop`, các bit `Read/Write` và các bit `ACK/NACK` giữa mỗi `khung dữ liệu`.

![Connect with orther](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTry4sV-ui_OqN3z3ioNBQlq25u2RSJ0i1ucA&usqp=CAU)

- ***Điều kiện khởi động (1 bit):*** Chân `SDA` chuyển từ mức cao xuống mức thấp trước khi `SDL` chuyển từ cao xuống thấp.
- ***Khung địa chỉ (7 hoặc 10 bit):*** Là một chuỗi 7 hoặc 10 bit duy nhất cho mỗi `Slave` để xác định `Slave` mà `Master` muốn liên lạc và bit `Read/Write` cũng được gửi cùng ngay sau `khung địa chỉ`. 

  	-`Master` sẽ gửi địa chỉ cho tất cả `Slave`, và những `Slave` sẽ so sánh địa chỉ đó với địa chỉ của nó.
  	- Nếu phù hợp nó sẽ gửi lại một bit `ACK` mức thấp trở lại cho `Master`, và nếu không khớp thì không làm gì cả và `SDA` giữa hai thiết bị đó vẫn ở mức cao
- ***Read/Write (1 bit):*** Sẽ cho `Slave` biết là `Master` muốn ghi dữ liệu vào nó hay nhận dữ liệu từ nó.
	- Nếu `Write`(gửi) thì `0`, còn `Read` thì `1`.
- ***Data Frame (8 bit):*** Sau khi Master phát hiện bit `ACK` gửi từ `Slave`, thì `khung dữ liệu` bắt đầu gửi.
	- Bit MSB được gửi trước.
 	- Theo sau mỗi khung dữ liệu sẽ có 1 bit `ACK/NACK` để xác nhận khung đã được nhận thành công(bit 0 chân `SDA`).
  	- Bit `ACK` phải được nhận bởi `Master` hoặc `Slave` (tùy vào thiết bị gửi dữ liệu) trước khi khung dữ liệu tiếp theo được gửi.
- ***Điều kiện dừng (1 bit):*** Sau khi tất cả khung dữ liệu đã được gửi đi, thì `Master` có thể gửi điều kiện dừng bằng cách:
	- Chuyển `SCL` từ mức thấp lên mức cao trước khi chuyển `SDA` từ thấp lên cao.

### Ưu, nhược điểm của chuẩn giao tiếp I2C

- **Ưu điểm:**
  - Chỉ sử dụng hai dây
  - Hỗ trợ nhiều `master` và nhiều `slave`
  - Bit `ACK / NACK` xác nhận rằng mỗi khung dữ liệu hay địa chỉ được gửi (hoặc nhận) thành công
  - Phần cứng ít phức tạp hơn với giao tiếp `UART`
  - Giao thức nổi tiếng và được sử dụng rộng rãi

- **Nhược điểm:**
  - Tốc độ truyền dữ liệu giao tiếp `I2C` chậm hơn so với giao tiếp `SPI`
  - Kích thước của khung dữ liệu được giới hạn ở `8 bit`
  - Cần phần cứng phức tạp hơn để triển khai so với giao tiếp `SPI`
### I2C trong STM32F407VET6.
**I2C Software:**
- Bước đầu, ta định nghĩa cho 2 chân sử dụng cho ic2 và cấp xung CLK:

<details>
		<summary>Software:</summary>

```C
#include "stm32f4xx.h"                  // Device header

#define I2C_SCL 	GPIO_Pin_0
#define I2C_SDA		GPIO_Pin_1
#define I2C_GPIO 	GPIOA

#define WRITE_SDA_0 	GPIO_ResetBits(I2C_GPIO, I2C_SDA)
#define WRITE_SDA_1 	GPIO_SetBits(I2C_GPIO, I2C_SDA)
#define WRITE_SCL_0 	GPIO_ResetBits(I2C_GPIO, I2C_SCL)
#define WRITE_SCL_1 	GPIO_SetBits(I2C_GPIO, I2C_SCL)
#define READ_SDA_VAL 	GPIO_ReadInputDataBit(I2C_GPIO, I2C_SDA)

void RCC_Config() {
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
}

void GPIO_Config() {
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = I2C_SDA | I2C_SCL;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(I2C_GPIO, &GPIO_InitStructure);
}

void TIM_Config() {
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
    TIM_TimeBaseInitStruct.TIM_Prescaler = 168 - 1;
    TIM_TimeBaseInitStruct.TIM_Period = 0xFFFF - 1;
    TIM_TimeBaseInitStruct.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseInitStruct.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStruct);
    TIM_Cmd(TIM2, ENABLE);
}

void delay_ms(uint32_t time) {
    TIM_SetCounter(TIM2, 0);
    while (TIM_GetCounter(TIM2) < time * 10);
}

void I2C_Start() {
    WRITE_SDA_0;
    delay_ms(3);
    WRITE_SCL_0;
    delay_ms(3);
}

void I2C_Stop() {
    WRITE_SDA_0;
    delay_ms(3);
    WRITE_SCL_1;
    delay_ms(3);
    WRITE_SDA_1;
    delay_ms(3);
}

void I2C_Write(uint8_t u8Data) {
    uint8_t i;

    for (i = 0; i < 8; i++) {
        if (u8Data & 0x80) {
            WRITE_SDA_1;
						
        } else {
            WRITE_SDA_0;
        }
        WRITE_SCL_1;
        delay_ms(1);
        WRITE_SCL_0;
        u8Data <<= 1;
    }

    WRITE_SDA_1;
    delay_ms(1);
    WRITE_SCL_1;
    delay_ms(1);
    WRITE_SCL_0;
    delay_ms(1);
}


uint8_t array[] = {7, 8, 4, 2};
void I2C_Write_Address() {
    
    I2C_Start();
    I2C_Write(0x27<<1);  
    I2C_Stop();
}
int main() {
    RCC_Config();
    GPIO_Config();
    TIM_Config();

	while (1) {
		I2C_Write_Address(); 
        for (uint8_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
            I2C_Start();        
            I2C_Write(array[i]);
            I2C_Stop();
            delay_ms(10000);
        }
    }
}




```
</details>

**Tóm lại:**
![I2C](./Hinhanh/I2C.PNG)
- SDA,SCL nối trở kéo lên >> mức cao
- Để bắt đầu truyền thì Master sẽ kéo đường SDA từ cao xuống thấp, sau đó SCL sẽ kéo từ cao xuống thấp.
- Sau đó Master sẽ gửi 7 bit địa chỉ + 1 bit(read(1) hoặc write(0)) + nhận 1 bit ACK(0) hoặc NACK(1) từ slayer .
	- Slayer nào trùng địa chỉ thì sẽ gửi 1 bit ACK cho Master.Có nghĩa là nếu SDA từ mức cao(nếu bit số 8 là 1) sẽ chuyển thành mức thấp do slayer kéo xuống.
- Đồng thời cứ mỗi bit thì SCL sẽ được kéo từ mức thấp lên cao.(tổng cộng 9 xung CK )

	- Nguyên nhân dịch trái 1 bit hoặc dịch trái 1 bít rồi or với bit 1.Mục đích để bit cuối là 0 hoặc 1
	- Ví dụ 0x27:0010 0111 ,Nếu Master muốn gửi dữ liệu cho slayer chỉ cần dịch trái bit 1 `0x27<<1`
	- Muốn nhận dữ liệu từ Slayer thì `(0x27 <<1)|0x01)` để biết cuối thành 1
- Tiếp theo là truyền hoặc nhận khung dữ liệu 8 bit trên đường SDA + 1 bit ACK/NACK
- SCL sẽ gửi 9 xung CK.
- Điều kiện để kết thúc SCL sẽ kéo từ mức 0 lên mức 1 , rồi SDA từ mức 0 lên 1





































</details>

<details>
  <summary><h4>UART protocol</h4></summary>

- `UART` (Universal Asynchronous Receiver / Transmitter) hoàn toàn khác biệt với chuẩn giao tiếp `SPI` hoặc `I2C`, những chuẩn này chỉ đơn tuần là giao tiếp phần mềm.
- Mục đích chính của `UART` là truyền và nhận dữ liệu nối tiếp không đồng bộ vì không có chân `Clock`. Nên tốc độ truyền `Baudrate` rất quan trọng trong giao thức này.
- Chuẩn giao tiếp `UART` sử dụng 2 dây để truyền và nhận dữ liệu giữa các thiết bị:
 - `TX (Transmiter)` – Dây truyền dữ liệu
 - `RX (Receiver)` – Dây nhận dữ liệu
- Giao tiếp giữa 1 `Master` và 1 `Slave`.
- Ngoài dữ liệu ra trong 1 lần truyền còn nhét thêm các Start bit, Stop bit, Parity bit. Các bit thêm vào này giúp cho Slave nhận biết, kiểm tra và nhận được đúng tín hiệu.

### Cách truyền nhận dữ liệu:

![Connect with orther](https://kysungheo.com/wp-content/uploads/2023/03/3-300x129.png)

- UART sẽ truyền và nhận dữ liệu từ một Data Bus
- Data Bus được sử dụng để gửi dữ liệu đến UART bởi một thiết bị khác như vi điều khiển.
- Dữ liệu được gửi từ Data Bus sang UART ở dạng song song.
- Sau khi UART nhận được dữ liệu từ Data Bus, nó sẽ thêm một bit Start, một bit Parity và một bit Stop.
- Tạo ra gói dữ liệu và truyền đi nối tiếp từng bit qua chân TX.
- Bên nhận sẽ chuyển đổi gói dữ liệu đó sang dạng song song và lược bỏ các bit Start, Parity, Stop và chuyển qua Data Bus.

![Connect with orther](https://www.circuitbasics.com/wp-content/uploads/2016/01/Introduction-to-UART-Packet-Frame-and-Bits-2.png)

- ***Start bit:*** Để bắt đầu truyền dữ liệu, UART truyền sẽ kéo đường truyền từ mức cao xuống mức thấp trong một chu kỳ đồng hồ. Khi UART bên nhận phát hiện sự chuyển đổi điện áp cao xuống thấp, nó bắt đầu đọc các bit trong khung dữ liệu ở tần số của tốc độ truyền (Baud rate).
- ***Data Frame:***
  - Nó có thể dài từ 5 bit đến 8 bit nếu sử dụng bit Parity (bit chẵn lẻ).
  - Nếu không sử dụng bit Parity, khung dữ liệu có thể dài 9 bit.
  - Trong hầu hết các trường hợp, dữ liệu được gửi với bit LSB (bit có trọng số thấp nhất) trước tiên.
- ***Parity Bit*** bit Parity là một cách để UART bên nhận kiểm tra dữ liệu đã thay đổi trong quá trình truyền hay không. Bit có thể bị thay đổi bởi tốc độ truyền không khớp hoặc truyền dữ liệu khoảng cách xa,… Sau khi UART bên nhận đọc khung dữ liệu, nó sẽ đếm số bit có giá trị là 1 và kiểm tra xem tổng số là số chẵn hay lẻ.
  - Nếu bit Parity là 0 (chẵn), thì tổng các bit 1 trong khung dữ liệu phải là một số chẵn.
  - Nếu bit Parity là 1 (lẻ), thì tổng các bit 1 trong khung dữ liệu sẽ là một số lẻ. Do đó qua kiểm tra sẽ biết được quá trình truyền dữ liệu có chính xác.
- ***Stop Bit:*** Để báo hiệu sự kết thúc của gói dữ liệu, UART gửi sẽ điều khiển đường truyền dữ liệu từ điện áp thấp đến điện áp cao trong ít nhất hai khoảng thời gian bit.

### Ưu, nhược điểm của chuẩn giao tiếp UART

Không có giao thức truyền thông nào là hoàn hảo, nhưng UART thực hiện khá tốt công việc của chúng. Dưới đây là một số ưu và nhược điểm của chuẩn giao tiếp UART. Mong rằng chúng có thể hỗ trợ cho dự án của bạn.
- Ưu điểm:
  - Chỉ sử dụng hai dây
  - Không cần tín hiệu đồng hồ
  - Có một bit chẵn lẻ để cho phép kiểm tra lỗi
  - Cấu trúc của gói dữ liệu có thể được thay đổi
  - Phương pháp được ghi chép rõ ràng và được sử dụng rộng rãi

- Nhược điểm:
  - Kích thước của khung dữ liệu được giới hạn tối đa là 9 bit
  - Không hỗ trợ nhiều hệ thống phụ dây hoặc nhiều hệ thống chính
  - Tốc độ truyền của mỗi UART phải nằm trong khoảng 10% của nhau

</details>

<details>
  <summary><h4>CAN protocol</h4></summary>
	
### CAN là gì?
- Controller Area Network (CAN Bus) là giao thức truyền thông nối tiếp, tốc độ cao. Gồm có hai dây (CAN-High và CAN-Low).
  - 1 dây là CAN high: điện áp dao động từ 2.5 – 3.75 V
  - 1 dây là CAN low: điện áp dao động từ 1.25 – 2.5 V

</details>

</details>
</details>
