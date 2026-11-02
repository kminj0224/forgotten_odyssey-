/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c1f0  Symbol: Resurrection_Img_Lode */

/* New_Notice::Resurrection_Img_Lode() */

void New_Notice::Resurrection_Img_Lode(void)

{
  int *in_r0;
  int *this;
  code *pcVar1;
  float in_s0;
  float in_s1;
  undefined8 uVar2;
  undefined4 in_stack_ffffffc0;
  undefined uVar3;
  CCPoint local_28;
  CCPoint local_24;
  char *local_20;
  int local_1c;
  CCPoint aCStack_18 [8];
  
  uVar3 = (undefined)((uint)in_stack_ffffffc0 >> 0x18);
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawString((CCNode *)in_r0,(char *)(DAT_0011c288 + 0x11c226),local_28,local_24,local_20,local_1c,
              DAT_0011c28c + 0x11c228,0xb,CONCAT22((short)(CONCAT13(uVar3,0xff0000) >> 0x10),0xffff)
             );
  this = (int *)N_Draw_Number::node();
  N_Draw_Number::SetNumberFont((N_Draw_Number *)this,8);
  uVar2 = N_Draw_Number::SetNumber((N_Draw_Number *)this,10,2);
  pcVar1 = *(code **)(*this + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  (*pcVar1)(this,aCStack_18);
  (**(code **)(*in_r0 + 200))(in_r0,this,0x13);
  return;
}


