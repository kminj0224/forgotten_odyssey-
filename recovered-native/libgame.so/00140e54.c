/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140e54  Symbol: update */

/* cocos2d::CCShuffleTiles::update(float) */

void __thiscall cocos2d::CCShuffleTiles::update(CCShuffleTiles *this,float param_1)

{
  undefined4 in_r1;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = *(undefined4 **)(this + 0x40);
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x2c); iVar3 = iVar3 + 1) {
    for (iVar2 = 0; iVar2 < *(int *)(this + 0x30); iVar2 = iVar2 + 1) {
      __floatsisf(param_1,puVar1[4]);
      uVar4 = __floatsisf(puVar1[5]);
      CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
      __mulsf3(in_r1,local_30);
      uVar4 = __mulsf3(in_r1,local_2c);
      CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
      *puVar1 = local_20;
      puVar1[1] = local_1c;
      local_28 = iVar3;
      local_24 = iVar2;
      param_1 = (float)placeTile(this,(_ccGridSize *)&local_28,(Tile *)puVar1);
      puVar1 = puVar1 + 6;
    }
  }
  return;
}


