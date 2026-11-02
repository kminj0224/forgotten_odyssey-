/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f28e0  Symbol: Hero_Skill_Button_Effect_Color */

/* Hero_Skill_Button_Effect_Color(cocos2d::_ccColor3B) */

undefined8 Hero_Skill_Button_Effect_Color(_ccColor3B param_1)

{
  int *piVar1;
  _ccColor3B local_c [3];
  
  local_c[0] = param_1;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000f2900 + 0xf28ec),3);
  (**(code **)(*piVar1 + 0xf4))(piVar1,local_c);
  return CONCAT44(local_c[0],param_1);
}


