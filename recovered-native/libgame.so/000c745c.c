/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c745c  Symbol: vDraw_Script_Fram */

/* vDraw_Script_Fram(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int,
   _Unit_Stage*) */

undefined8
vDraw_Script_Fram(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,
                 int param_6,_Unit_Stage *param_7)

{
  int *this;
  undefined4 in_stack_0000000c;
  _Unit_Stage *p_Var1;
  char *pcVar2;
  CCNode *pCVar3;
  
  pcVar2 = param_2;
  pCVar3 = param_3;
  this = (int *)operator_new(0x39c);
  Image_Fram::Image_Fram((Image_Fram *)this);
  (**(code **)(*this + 0xac))(this,in_stack_0000000c);
  p_Var1 = param_7;
  Image_Fram::Init_animation((Image_Fram *)this,param_1,param_2,false,(int)param_7);
  (**(code **)(*(int *)param_3 + 0xcc))(param_3,this,param_6,param_7,p_Var1,pcVar2,pCVar3);
  cocos2d::CCObject::release((CCObject *)this);
  **(int **)(DAT_000c74bc + 0xc74ae) = **(int **)(DAT_000c74bc + 0xc74ae) + 1;
  return CONCAT44(pcVar2,p_Var1);
}


