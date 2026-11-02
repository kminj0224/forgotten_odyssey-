/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9c86  Symbol: SetFadeIn */

/* Draw_Number::SetFadeIn(float, float) */

undefined8 __thiscall Draw_Number::SetFadeIn(Draw_Number *this,float param_1,float param_2)

{
  int iVar1;
  CCNode *this_00;
  CCAction *pCVar2;
  uchar in_r1;
  undefined4 in_r2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  do {
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar3);
    if (iVar1 != 0) {
      this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar3);
      fVar4 = (float)__fixunssfsi(in_r2);
      pCVar2 = (CCAction *)cocos2d::CCFadeTo::actionWithDuration(fVar4,in_r1);
      cocos2d::CCNode::runAction(this_00,pCVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x14);
  return CONCAT44(in_r2,this);
}


