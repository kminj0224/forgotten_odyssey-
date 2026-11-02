/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a674  Symbol: actionWithSize */

/* cocos2d::CCTransitionPageTurn::actionWithSize(cocos2d::_ccGridSize const&) */

void cocos2d::CCTransitionPageTurn::actionWithSize(_ccGridSize *param_1)

{
  CCFiniteTimeAction *pCVar1;
  _ccGridSize *in_r1;
  float in_s0;
  
  if (param_1[0x10a] == (_ccGridSize)0x0) {
    CCPageTurn3D::actionWithSize(in_r1,in_s0);
  }
  else {
    pCVar1 = (CCFiniteTimeAction *)CCPageTurn3D::actionWithSize(in_r1,in_s0);
    CCReverseTime::actionWithAction(pCVar1);
  }
  return;
}


