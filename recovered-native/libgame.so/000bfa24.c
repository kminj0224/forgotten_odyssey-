/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bfa24  Symbol: vDrawMoney */

/* vDrawMoney(cocos2d::CCNode*, int, cocos2d::CCPoint, int, cocos2d::CCTextAlignment, int, int) */

undefined8
vDrawMoney(CCNode *param_1,int param_2,CCPoint param_3,int param_4,CCTextAlignment param_5,
          int param_6,int param_7)

{
  int *this;
  undefined4 in_stack_0000000c;
  CCPoint local_20;
  int local_1c;
  CCPoint CStack_18;
  
  local_20 = param_3;
  local_1c = param_4;
  CStack_18 = param_3;
  this = (int *)N_Draw_Number::node();
  (**(code **)(*this + 0x3c))(this,&local_20);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,param_7,in_stack_0000000c);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)this,param_5);
  N_Draw_Number::SetMoney((N_Draw_Number *)this,param_2,param_6);
  return CONCAT44(local_1c,local_20);
}


