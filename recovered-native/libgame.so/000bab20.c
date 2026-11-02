/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bab20  Symbol: ani_ani_S */

/* ani_ani_S(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_S(CCSprite *param_1,_KG_Anit *param_2)

{
  CCArray *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if (this != (CCArray *)0x0) {
    iVar1 = cocos2d::CCArray::count(this);
    uVar3 = 0;
    if (iVar1 != 0) {
      for (; uVar2 = cocos2d::CCArray::count(this), uVar3 < uVar2; uVar3 = uVar3 + 1) {
        cocos2d::CCArray::objectAtIndex(this,uVar3);
        cocos2d::CCNode::stopAllActions();
      }
    }
  }
  return;
}


