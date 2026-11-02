/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001428b4  Symbol: visit */

/* cocos2d::CCNode::visit() */

void __thiscall cocos2d::CCNode::visit(CCNode *this)

{
  CCGridBase *pCVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  if (this[0x4c] != (CCNode)0x0) {
    glPushMatrix();
    pCVar1 = *(CCGridBase **)(this + 0x48);
    if ((pCVar1 != (CCGridBase *)0x0) && (pCVar1[0x11] != (CCGridBase)0x0)) {
      CCGridBase::beforeDraw(pCVar1);
      transformAncestors(this);
    }
    transform(this);
    if ((*(CCArray **)(this + 0x40) == (CCArray *)0x0) ||
       (iVar2 = CCArray::count(*(CCArray **)(this + 0x40)), iVar2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar4 = *(uint **)(*(int *)(this + 0x40) + 0x14);
      while (((uVar5 < *puVar4 && (piVar3 = *(int **)(uVar5 * 4 + puVar4[2]), piVar3 != (int *)0x0))
             && (piVar3[5] < 0))) {
        uVar5 = uVar5 + 1;
        (**(code **)(*piVar3 + 0xe4))();
      }
    }
    (**(code **)(*(int *)this + 0xe0))(this);
    if ((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
       (iVar2 = CCArray::count(*(CCArray **)(this + 0x40)), iVar2 != 0)) {
      iVar2 = uVar5 << 2;
      puVar4 = *(uint **)(*(int *)(this + 0x40) + 0x14);
      for (; uVar5 < *puVar4; uVar5 = uVar5 + 1) {
        piVar3 = *(int **)(puVar4[2] + iVar2);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xe4))();
        }
        iVar2 = iVar2 + 4;
      }
    }
    pCVar1 = *(CCGridBase **)(this + 0x48);
    if ((pCVar1 != (CCGridBase *)0x0) && (pCVar1[0x11] != (CCGridBase)0x0)) {
      CCGridBase::afterDraw(pCVar1,this);
    }
    glPopMatrix();
  }
  return;
}


