/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b9f2  Symbol: addSpriteWithoutQuad */

/* cocos2d::CCSpriteBatchNode::addSpriteWithoutQuad(cocos2d::CCSprite*, unsigned int, int) */

undefined8 __thiscall
cocos2d::CCSpriteBatchNode::addSpriteWithoutQuad
          (CCSpriteBatchNode *this,CCSprite *param_1,uint param_2,int param_3)

{
  uint **ppuVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_20;
  
  *(uint *)(param_1 + 0x10c) = param_2;
  local_20 = (int *)this;
  if ((*(CCArray **)(this + 0x10c) == (CCArray *)0x0) ||
     (iVar2 = CCArray::count(*(CCArray **)(this + 0x10c)), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(this + 0x10c);
    if (uVar3 != 0) {
      ppuVar1 = (uint **)(uVar3 + 0x14);
      uVar3 = **ppuVar1;
      if (uVar3 != 0) {
        piVar4 = (int *)(*ppuVar1)[2];
        local_20 = piVar4 + (uVar3 - 1);
        uVar3 = 0;
        while (piVar4 <= local_20) {
          iVar2 = *piVar4;
          piVar4 = piVar4 + 1;
          if (iVar2 == 0) break;
          uVar3 = uVar3 + (param_2 <= *(uint *)(iVar2 + 0x10c));
        }
      }
    }
  }
  CCArray::insertObject(*(CCArray **)(this + 0x10c),(CCObject *)param_1,uVar3);
  CCNode::addChild((CCNode *)this,(CCNode *)param_1,param_2,param_3);
  return CONCAT44(local_20,this);
}


