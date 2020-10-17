int B = 13;//للتعريف بالصفارة على انها متغير صحيح
int digitalPin = 2;//التعريف بمدخل الحساس الديجيتال لكن باخذ قيم رقمية صحيحه
int analogPin = A0;//التعريف بمدخل حساس الأنالوج لكن بأخذ قيم تناظرية وصحيحه
int digitalVal;//قرائة قيم الديجتال 
int analogVal;//قرائة قيم الأنالوج
void setup() {
  // put your setup code here, to run once:
  //التعريف بالمدخلات والمخرجات
pinMode(B, OUTPUT);//التعريف بالصفارة على أنها مخرج
pinMode(digitalPin, INPUT);//التعريف بــdidital pin على أنه مدخل
Serial.begin(9600);//فتح نافذة التسلسل 
}
void loop() {
  // put your main code here, to run repeatedly:
  //كتابة الأوامر
digitalVal = digitalRead(digitalPin);//اقراء من مدخل الديجيتال في الحساس
if(digitalVal == HIGH)//إن كان تأكيدا مرتفع
{
  digitalWrite(B, HIGH);//قم بكتابة (تشغيل) الصفاره 
}
else {//غير ذلك
  digitalWrite(B, LOW);}//قم بكتابة (إيقاف) للصفارة
analogVal = analogRead(analogPin);//اقرا قيم الأنالوج من الحساس
Serial.println(analogVal);//قم بالطباعة عبى النافذة التسلسلية القيم المتغيره في الأنالوج
delay(100);//انتظر ثانية
}
