/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001515c0  Symbol: draw */

/* cocos2d::CCRibbon::draw() */

void __thiscall cocos2d::CCRibbon::draw(CCRibbon *this)

{
  bool bVar1;
  undefined4 uVar2;
  CCRibbonSegment *this_00;
  int iVar3;
  CCRibbonSegment **ppCVar4;
  undefined8 uVar5;
  
  CCNode::draw();
  if (*(int *)(*(int *)(this + 0x114) + 0x18) - *(int *)(*(int *)(this + 0x114) + 0x14) >> 2 != 0) {
    glDisableClientState(DAT_00151650);
    uVar2 = (**(code **)(**(int **)(this + 0x100) + 0x20))();
    uVar5 = glBindTexture(DAT_00151654,uVar2);
    if ((*(int *)(this + 0x108) != 1) || (bVar1 = false, *(int *)(this + 0x10c) != DAT_00151658)) {
      uVar5 = glBlendFunc(*(int *)(this + 0x108),*(undefined4 *)(this + 0x10c));
      bVar1 = true;
    }
    iVar3 = *(int *)(this + 0x114);
    if ((iVar3 != 0) &&
       (ppCVar4 = *(CCRibbonSegment ***)(iVar3 + 0x14),
       *(int *)(iVar3 + 0x18) - (int)ppCVar4 >> 2 != 0)) {
      while( true ) {
        if (ppCVar4 == *(CCRibbonSegment ***)(*(int *)(this + 0x114) + 0x18)) break;
        this_00 = *ppCVar4;
        ppCVar4 = ppCVar4 + 1;
        uVar5 = CCRibbonSegment::draw
                          (this_00,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),
                           *(_ccColor4B **)(this + 0x138));
      }
    }
    if (bVar1) {
      glBlendFunc(1,DAT_00151658);
    }
    glEnableClientState(DAT_00151650);
  }
  return;
}


