/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ee94  Symbol: Set_Time */

/* New_UI::Set_Time(int, int, int) */

void __thiscall New_UI::Set_Time(New_UI *this,int param_1,int param_2,int param_3)

{
  CCNode *pCVar1;
  N_Draw_Number *pNVar2;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2e);
  pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  N_Draw_Number::SetNumber_Re(pNVar2,param_2,2);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2e);
  pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  N_Draw_Number::SetNumber_Re(pNVar2,param_3,2);
  return;
}


