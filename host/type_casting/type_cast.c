#include <stdio.h>
int main(void){
    /*Compiler implicitly considers the data size of these constants
    As 4bytes(of ineteger data type)
    This is also called integer promotion*/
    /*Derleyici 0x87 ve 0xFF00 gibi sabit değerleri 
    4bayt(tam sayı veri tipi(int)) olarak kabul eder 
    Buna Tam Sayı Yükseltmesi denir 
    Yani => sabit sayılar int olarak işeme girer (toplama,çıkarma
    çarpma,bölme) işlem sonucu (=) ile değişkene atanır eger aşşadaki
    Gibi unsigned char ise(yani bir bayt) 1byte a dönüştürülerek
    (kırpılarak)değişkene atanır(yalnızca son 8 bit i atanır)
    Buna ise integer conversion/narrowing conversion denir)
    */
    /*The compiler treats constant values ​​like 0x87 and 0xFF00
    as if they were 4 bytes (int data type). This is also called İnteger promotion
    Well => constant data will progress(add,sum-mul-div) 
    like int data type(4byte) the result by appointed by(=) the variable.
    if the variable char or anyone under 4byte the result convert the 1 byte
    and appoinment the variable(last 8bit) this is also called 
    integer conversion/narrowing conversion.
    */
    unsigned char data = 0x87 + 0xFF00;
    /*
    So, Compiler did implicit casting twice here
    1)It promoted the data sizes of RHS constant to int
    2)while storing the RHS into LHS it again did casting from
    int to unsigned char and fired and warning data loss during conversion.
    */
    /*
    Yani,Derleyici burada iki kez örtük dönüştürme işlemi yaptı,
    1)Sağ taraftaki sabitlerin veri boyutlarını int türüne yükseltti.
    2)Sağ taraftaki değerleri sol tarafa kaydederken tekrar int türünden 
    unsigned char türüne dönütürme işlemi yaptı ve dönüştürme sırasında
    veri kaybı uyarısı verdi.
    */
    /*
    if you want dont warning 
    inform the compiler
    say ı want the keep data in 1 byte 
    You say like that
    unsigned char data = (unsigned char) (0x87 + 0xFF00);
    And don t send warning because you inform(I want keep in 1 byte,
    I know and accept data loss).
    */
    /*
    Eger compiler ın uyarı vermesini istemiyorsanız
    Önceden compiler a bu datayı bir byte ta tutmak istediğinizi
    bunu bildiğini ve kabul ettiğinizi söylemeniz lazım bunu
    Şu şekilde söyleriz
    unsigned char data = (unsigned char) (0x87 + 0xFF00)
                         buradaki (unsigned char) ile
    veriyi açıkca bir byte ta tutmak istediğimizi söyler 
    data kaybını kabul ederek bir byte da tutarız bunu kabul ettiğimizi
    ve açıkca değiştirmek istediğimizi söylediğimiz için compiler uyarı vermez.
    */
    float result = 80/3;
    /*
    As ı Sad 
    Compiler will progress accept int data type of variable
    if you divide integer number to integer number result will be a integer
    normally 80/3 =26.6 but result on this(float result = 80/3) = 26 
    because compiler want to progress integer numbers
    if you want the real result you must inform the compiler 
    real result is fractional number and we keep fractional number data on 
    flout variable type on c programing language 
    You Say Lıke That
    float result = (float)80/3;
    if you do this(explicit casting) compiler is promoted
    other variable on float
    and result will be float = 26.6
    */
   /*
    Bir tamsayıyı bir tamsayıya bölerseniz sonuç bir tamsayı olur.
    Normalde 80/3 = 26.6 olur, ancak burada (float result = 80/3) sonuç 26 olur.
    Çünkü derleyici tamsayıları işlemek ister.
    Gerçek sonuç istiyorsanız derleyiciye bildirmelisiniz.
    Gerçek sonuç kesirli bir sayıdır ve biz kesirli sayı verilerini
    C programlama dilinde float değişken tipi ile saklarız.
    float result = (float)80/3;
    Bunu yaparsanız (açık tür dönüştürme), derleyici
    diğer değişkeni float'a dönüştürür.
    Ve sonuç float = 26.6 olur.
   */
    printf("Data : %u result : %f\n",data,result);
}