### วิธีการติดตั้ง ESP32 Core ให้ใช้งานได้บนโปรแกรม Arduino IDE เพื่อให้ขึ้นชื่อบอร์ด ESP32 ก่อนจะอัพลงไปในตัวบอร์ด ESP32

เริ่มแรกให้เปิดโปรแกรม Arduino IDE ขึ้นมา แล้วเข้าไปที่ File> Preferences

![1](https://user-images.githubusercontent.com/100085999/216939215-b5f8ecdb-97b3-4566-af6f-d739f02599f9.png)


เมื่อเข้ามาได้แล้วจะเจอหน้านี้

![2](https://user-images.githubusercontent.com/100085999/216939859-e6d6fb42-2f65-4607-a8da-28a321a8f370.png)

ให้คัดลอก https://dl.espressif.com/dl/package_esp32_index.json  ไปวางในช่อง “Additional Board Manager URLs” แล้วกด OK

จากนั้นให้เปิด Arduino IDE ไปที่ Tools > Board > Boards Manager…  ดังรูป

![3](https://user-images.githubusercontent.com/100085999/216939895-5493402a-d38b-4c18-a087-ec46223fcb37.png)

เมื่อกดดังภาพแล้วจะเข้าสู่หน้าด้านล่าง

![4](https://user-images.githubusercontent.com/100085999/216939922-9f4ceca9-b6fa-4f31-ad28-bd645299bff4.png)

ให้พิมพ์ในช่องค้นหาว่า ESP32 จากนั้นให้กดติดตั้ง และรอให้ดาวน์โหลดและติดตั้งจนเสร็จ


![5](https://user-images.githubusercontent.com/100085999/216939949-bff0f40f-8cb1-43f3-8d29-6262e683749e.png)


เมื่อรอติดตั้งเสร็จให้เข้า Tools > Board แล้วเราก็จะเห็นชื่อ ESP32 Arduino เพียงเท่านี้เราก็จะอัพโปรแกรมลงบอร์ด ESP32 ได้แล้ว

