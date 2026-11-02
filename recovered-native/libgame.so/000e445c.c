/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e445c  Symbol: Unit_Buy */

/* Market_Unit::Unit_Buy(int, int) */

undefined8 __thiscall Market_Unit::Unit_Buy(Market_Unit *this,int param_1,int param_2)

{
  int *this_00;
  Market_Unit *pMVar1;
  int iVar2;
  
  pMVar1 = this;
  iVar2 = param_2;
  this_00 = (int *)operator_new(0x110);
  UI_Notice::UI_Notice((UI_Notice *)this_00);
  (**(code **)(*this_00 + 300))(this_00,this,param_2,param_1,pMVar1,param_1,iVar2);
  cocos2d::CCObject::release((CCObject *)this_00);
  return CONCAT44(param_1,pMVar1);
}


