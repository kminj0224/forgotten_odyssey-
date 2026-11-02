/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014128e  Symbol: update */

/* cocos2d::CCTurnOffTiles::update(float) */

void __thiscall cocos2d::CCTurnOffTiles::update(CCTurnOffTiles *this,float param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_r1;
  undefined4 extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __floatunsisf(*(undefined4 *)(this + 0x38));
  __mulsf3(in_r1,uVar1);
  uVar2 = __fixsfsi();
  for (uVar3 = 0; uVar3 < *(uint *)(this + 0x38); uVar3 = uVar3 + 1) {
    uVar4 = *(undefined4 *)(this + 0x30);
    uVar1 = *(undefined4 *)(uVar3 * 4 + *(int *)(this + 0x3c));
    local_20 = __udivsi3(uVar1,uVar4);
    __aeabi_uidivmod(uVar1,uVar4);
    local_1c = extraout_r1;
    if (uVar3 < uVar2) {
      turnOffTile(this,(_ccGridSize *)&local_20);
    }
    else {
      turnOnTile(this,(_ccGridSize *)&local_20);
    }
  }
  return;
}


