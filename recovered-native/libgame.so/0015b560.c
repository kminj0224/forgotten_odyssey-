/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b560  Symbol: insertChild */

/* cocos2d::CCSpriteBatchNode::insertChild(cocos2d::CCSprite*, unsigned int) */

void __thiscall
cocos2d::CCSpriteBatchNode::insertChild(CCSpriteBatchNode *this,CCSprite *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  CCArray *this_00;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int **ppiVar6;
  int **ppiVar7;
  _ccV3F_C4B_T2F_Quad a_Stack_78 [100];
  
  CCSprite::useBatchNode(param_1,this);
  param_1[0x118] = (CCSprite)0x1;
  *(uint *)(param_1 + 0x10c) = param_2;
  iVar1 = (**(code **)(**(int **)(this + 0x100) + 0x14))();
  iVar2 = (**(code **)(**(int **)(this + 0x100) + 0x18))();
  if (iVar1 == iVar2) {
    increaseAtlasCapacity(this);
  }
  memcpy(a_Stack_78,param_1 + 0x160,0x60);
  CCTextureAtlas::insertQuad(*(CCTextureAtlas **)(this + 0x100),a_Stack_78,param_2);
  CCArray::insertObject(*(CCArray **)(this + 0x10c),(CCObject *)param_1,param_2);
  if (((*(CCArray **)(this + 0x10c) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x10c)), iVar1 != 0)) &&
     (*(int *)(this + 0x10c) != 0)) {
    piVar3 = *(int **)(*(int *)(this + 0x10c) + 0x14);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      piVar4 = (int *)piVar3[2];
      piVar3 = piVar4 + iVar1 + -1;
      uVar5 = 0;
      while (piVar4 <= piVar3) {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        if (iVar1 == 0) break;
        if (param_2 < uVar5) {
          *(int *)(iVar1 + 0x10c) = *(int *)(iVar1 + 0x10c) + 1;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
  if ((this_00 != (CCArray *)0x0) && (iVar1 = CCArray::count(this_00), iVar1 != 0)) {
    iVar1 = **(int **)(this_00 + 0x14);
    if (iVar1 != 0) {
      ppiVar6 = (int **)(*(int **)(this_00 + 0x14))[2];
      ppiVar7 = ppiVar6 + iVar1 + -1;
      while (ppiVar6 <= ppiVar7) {
        piVar3 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        if (piVar3 == (int *)0x0) {
          return;
        }
        iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
        uVar5 = atlasIndexForChild(this,(CCSprite *)piVar3,iVar1);
        insertChild(this,(CCSprite *)piVar3,uVar5);
      }
    }
  }
  return;
}


