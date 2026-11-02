/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e448a  Symbol: MargetTouchesBegan */

/* Market_Unit::MargetTouchesBegan(cocos2d::CCPoint) */

undefined8 Market_Unit::MargetTouchesBegan(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  CCPoint in_r1;
  undefined4 in_r2;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
  iVar2 = Sprite_Touch2(pCVar1,in_r1);
  if (iVar2 != 0) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
    (**(code **)(*piVar3 + 0x6c))(piVar3,1);
  }
  return CONCAT44(in_r2,in_r1);
}


