# micropython-c-module

Amacım, MicroPython içerisinde kendi yazdığımız C modüllerini kullanmak. depo içerindeki kodda, basit bir toplama işlemi yapan bir C modülü yer alıyor ve bu modülü MicroPython içinden başarıyla kullanabiliyorum.

Asıl hedefimiz, projemizde ihtiyaç duyulan bazı modülleri — örneğin bir kuyruk (queue) oluşturma kütüphanesini — C diliyle yazarak MicroPython içerisinde kullanmak.

Bunu yapma sebebimiz, C dilinin Python’a göre daha hızlı olması ve Raspberry Pi Pico cihazının bazı donanım özelliklerine C üzerinden daha doğrudan erişim sağlanabilmesidir.

Depo içerisinde şu dosya ve klasör yapısı yer alıyor:

mymodule/mymodule.c
  C modülünüzün kaynak kodudur
  MicroPython ile etkileşime girecek tüm fonksiyonlarınızı içerir
  Python tarafından çağrılabilecek fonksiyonları tanımlar
  Modülün yapısını ve içeriğini tanımlar

mymodule/micropython.mk
  Make build sistemi için yapılandırma dosyasıdır
  Modülünüzün kaynak dosyalarını ve derleme bayrağını (flags) belirtir
  Make kullanarak MicroPython'ı derlerken kullanılır

mymodule/micropython.cmake
  CMake build sistemi için modülünüzün yapılandırma dosyasıdır
  Modülünüzün kaynakları, başlık dizinleri ve diğer CMake ayarlarını içerir
  CMake kullanarak MicroPython'ı derlerken kullanılır

modules/micropython.cmake
  Üst seviye CMake dosyasıdır
  Tüm modüllerinizi ana derleme sürecine dahil eder
  Bu dosya, kullanılacak modülleri belirtmenizi sağlar

İlk olarkak basit bir şekilde sistemi anlamanız daha iyi olcağını düşünüyorum bir sonraki aşamada projemiz için gerekli olan modulleri yazmaya başlayabiliriz 

Kolay Gelsin ☺️

