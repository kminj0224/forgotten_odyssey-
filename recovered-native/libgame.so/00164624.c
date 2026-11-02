/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164624  Symbol: setupTiles */

/* cocos2d::CCTMXLayer::setupTiles() */

void __thiscall cocos2d::CCTMXLayer::setupTiles(CCTMXLayer *this)

{
  int *piVar1;
  undefined4 *puVar2;
  CCTexture2D *this_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float extraout_s0;
  float extraout_s1;
  CCPoint aCStack_20 [3];
  
  iVar8 = *(int *)(this + 0x124);
  piVar1 = (int *)(**(code **)(**(int **)(this + 0x100) + 0x1c))();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x24))();
  *(undefined4 *)(iVar8 + 0x30) = *puVar2;
  *(undefined4 *)(iVar8 + 0x34) = puVar2[1];
  this_00 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x100) + 0x1c))();
  CCTexture2D::setAliasTexParameters(this_00);
  parseInternalProperties(this);
  iVar8 = 0;
  while( true ) {
    uVar5 = __floatunsisf(iVar8);
    iVar6 = __aeabi_fcmplt(uVar5,*(undefined4 *)(this + 0x114));
    if (iVar6 == 0) break;
    iVar6 = 0;
    while( true ) {
      uVar3 = __floatunsisf(iVar6);
      uVar10 = *(undefined4 *)(this + 0x110);
      iVar4 = __aeabi_fcmplt(uVar3,uVar10);
      if (iVar4 == 0) break;
      uVar10 = __mulsf3(uVar10,uVar5);
      __addsf3(uVar3,uVar10);
      iVar4 = __fixunssfsi();
      uVar9 = *(uint *)(iVar4 * 4 + *(int *)(this + 0x120));
      if (uVar9 != 0) {
        CCPoint::CCPoint((CCPoint *)aCStack_20,extraout_s0,extraout_s1);
        appendTileForGID(this,uVar9,aCStack_20);
        uVar7 = uVar9;
        if (*(uint *)(this + 0x138) < uVar9) {
          uVar7 = *(uint *)(this + 0x138);
        }
        *(uint *)(this + 0x138) = uVar7;
        if (uVar9 < *(uint *)(this + 0x13c)) {
          uVar9 = *(uint *)(this + 0x13c);
        }
        *(uint *)(this + 0x13c) = uVar9;
      }
      iVar6 = iVar6 + 1;
    }
    iVar8 = iVar8 + 1;
  }
  return;
}


