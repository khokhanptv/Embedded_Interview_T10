 <details>
  <summary><h2>▶ C programming language</h2></summary>


<details>
  <summary><h3>C trong ngành nhúng và IoT có gì khác nhau ?</h3></summary>
  Các lập trình viên nghành IT đều viết các chương trình để chạy trên các thiết bị có cấu hình rất mạng ví dụ như máy tính, laptop, cloud… Trong khi đặc thù của nghành nhúng là lập trình cho những con chip, máy tính nhúng có bộ nhớ RAM, ROM và tài nguyên vô cùng hạn chế. Vì vậy phải tính toán và tiết kiệm từng phần tài nguyên nhỏ. Bất cứ một thao tác sử dụng quá nhiều tài nguyên cũng có thể gây ra các lỗi Hard Fault, Stack overflow…

<details>
  <summary><h3> IDE,Text Editor,Compiler</h3></summary>
  
  - **_IDE (Integrated Development Environment)_**
   Là môi trường tích hợp dùng để viết code để phát triển ứng dụng. Ngoài ra IDE tích hợp sẵn các tool hỗ trợ khác như trình biên dịch (Compiler), trình thông dịch (Interpreter), kiểm tra lỗi (Debugger), định dạng hoặc highlight code, tổ chức thư mục code, tìm kiếm code…

**_Text Editor_**
 	là một trình soạn thảo, không tích hợp sẵn trình biên dịch hoặc trình thông dịch bên trong nó, nghĩa là muốn chạy được ứng dụng, bạn phải dùng riêng compiler bên ngoài. Những Text Editor này thường dùng cho phát triển ứng dụng web, tiêu biểu như Sublime text, Atom, Bracket, Notepad++, VScode…v.v.

**_Compiler_** 
	hay còn gọi là Trình biên dịch, là một chương trình có nhiệm vụ dịch các các code của một ngôn ngữ lập trình tương ứng thành một chương trình tương đương của ngôn ngữ cấp thấp hơn (thường là ngôn ngữ máy).

<details>
  <summary><h3>Kiểu dữ liệu</h3></summary>

  ![kieu du lieu](./Kieu_Dulieu(1).PNG)
  ![kieu du lieu](./Kieu_Dulieu(2).PNG)
  


<details>
  <summary><h3>Quá trình biên dịch</h3></summary>
	
Quy trình biên dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java, C#…) sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi.
### Quá trình biên dịch bao gồm 4 giai đoạn:
	
- **_Pre-processor (Giai đoạn tiền xử lý):_** Nhận mã nguồn và xóa bỏ các dòng comments, xử lý các chỉ thị tiền xử lý có bắt đầu bằng kí hiệu `#`. Như `#include` (thay thế mã chương trình của một tệp tiêu để vào mã nguồn cần dịch), `#define` (thay thế bằng giá trị cụ thể tại mỗi nơi sử dụng trong chương trình).
	-  Sau khi qua quá trình tiền xử lý thì file code lúc này sẽ có dạng `.i`.
	-  Dùng lệnh `gcc -E filename.c -o filename.i` hoặc `gcc -E filename.c` để xem code sau khi qua quá trình preprocessor.
- **_Compiler (Giai đoạn dịch NNBC sang ngôn ngữ Assembly):_** Kiểm tra các kiểu dữ liệu có lỗi hay không, phân tích cú pháp (syntax) của mã nguồn NNBC và tối ưu code.
	-  Quá trình này sẽ biên dịch từ code `.i` sang ngôn ngữ assembly `.s`.
	-  Dùng lệnh `gcc -S -o filename.s filename.c` để có thể xem code sau quá tình compiler.
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
- Biến static cục bộ: Khi 1 biến cục bộ được khai báo với từ khóa static. Biến sẽ chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy chương trình. Giá trị của nó không bị mất đi ngay cả khi kết thúc hàm. Tuy nhiên khác với biến toàn cục có thể gọi trong tất cả mọi nơi trong chương trình, thì biến cục bộ static chỉ có thể được gọi trong nội bộ hàm khởi tạo ra nó. Mỗi lần hàm được gọi, giá trị của biến chính bằng giá trị tại lần gần nhất hàm được gọi.Biến static sẽ lưu vào
vùng nhớ Data/ Bss, được giải phóng khi kết thúc chương trình.
- Biến static toàn cục: Biến toàn cục static sẽ chỉ có thể được truy cập và sử dụng trong File khai báo nó, các File khác không có cách nào truy cập được. 
- Biến cục bộ: Biến cục bộ sẽ được lưu vào vùng nhớ stack, thu hồi khi kết thúc hàm cục bộ. 
</details>


<details>
  <summary><h3>Struct và Union</h3></summary>

- Về mặt ý nghĩa, struct và union cơ bản giống nhau. Tuy nhiên, về mặt lưu trữ trong bộ nhớ, chúng có sự khác biệt rõ rệt như sau:
	**struct:** Dữ liệu của các thành viên của struct được lưu trữ ở những vùng nhớ khác nhau. Do đó kích thước của 1 struct tối thiểu bằng kích thước các thành viên cộng lại tại vì còn phụ thuộc vào bộ nhớ đệm (struct padding).
	**Struct padding :** Chèn thêm các vùng nhớ trống giữa các member để đảm bảo việc dữ liệu trong struct được natually aligned(các thao tác đọc ghi trong bộ nhớ nhanh hơn )
	> Ví dụ:
	![Struct_Padding](./Struct_Padding.PNG)
	![Struct_Padding](./Struct_Padding(2).PNG)
	- Như vậy đối với struct B kích thước của nó sẽ là 16 bytes, trong đó có 14 bytes được sử dụng và 2 bytes bị padding. Chúng ta thấy rằng việc sắp xếp thứ tự các phần tử của struct có thể giúp cho việc xử dụng tài nguyên RAM trở lên hiệu quả hơn, tránh bị tốn quá nhiều bytes cho quá trình padding.
	**Sử dụng Struct khi bạn muốn lưu trữ nhiều thông tin có liên quan với nhau:**
		- Ví dụ: Một hồ sơ người dùng có tên, tuổi, địa chỉ, v.v.
	**Khi bạn muốn lưu trữ dữ liệu với các loại dữ liệu khác nhau:**
		- Ví dụ: Một khối dữ liệu đại diện cho một ngày gồm ngày,   tháng, năm là các kiểu dữ liệu khác nhau.
	**Khi bạn muốn có một cấu trúc dữ liệu linh hoạt, mà mỗi thành phần có thể được truy cập một cách dễ dàng:**
		- Ví dụ: Các thành phần của một hình học như điểm, đường, v.v.

	**Union :** Dữ liệu các thành viên sẽ dùng chung 1 vùng nhớ. Kích thước của union được tính là kích thước lớn nhất của kiểu dữ liệu trong union. Việc thay đổi nội dung của 1 thành viên sẽ dẫn đến thay đổi nội dung của các thành viên khác.

	**Sử dụng Union khi bạn muốn tiết kiệm bộ nhớ và chỉ lưu trữ một giá trị tại một thời điểm:**

	- Ví dụ:Union lưu trữ các thành viên trong cùng một vị trí bộ nhớ. Khi bạn gán một thành viên, các giá trị của các thành viên khác sẽ thay đổi.
	**Khi bạn chỉ cần một phần nào đó của dữ liệu mà không cần toàn bộ:**

	- Ví dụ: Một biến có thể đóng vai trò là số nguyên hoặc số thực, nhưng không phải cả hai cùng một lúc.
	**Khi không cần truy cập đồng thời đến tất cả các thành viên:**

	- Liên hợp cho phép bạn chỉ truy cập thành viên mà bạn cần tại một thời điểm.

</details>
