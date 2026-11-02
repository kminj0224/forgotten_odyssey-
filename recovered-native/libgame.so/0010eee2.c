/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010eee2  Symbol: Set_Time_B */

/* New_UI::Set_Time_B(int) */

void __thiscall New_UI::Set_Time_B(New_UI *this,int param_1)

{
  CCNode *this_00;
  N_Draw_Number *this_01;
  
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2e);
  this_01 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(this_00,1);
  N_Draw_Number::SetNumber_Re(this_01,param_1,2);
  return;
}


