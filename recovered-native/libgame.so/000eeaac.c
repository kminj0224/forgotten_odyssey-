/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eeaac  Symbol: Unit_init_layer */

/* Boss702600::Unit_init_layer() */

Boss702600 * __thiscall Boss702600::Unit_init_layer(Boss702600 *this)

{
  undefined4 *puVar1;
  int *this_00;
  CCAnimation *pCVar2;
  CCObject *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  CCMutableArray *pCVar7;
  int iVar8;
  char *pcVar9;
  CCObject **ppCVar10;
  Boss702600 *pBVar11;
  int local_24;
  
  puVar1 = (undefined4 *)operator_new(0x24);
  iVar8 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar1);
  puVar1[2] = 0x50;
  puVar1[3] = 0x28;
  puVar1[6] = DAT_000eebd0;
  do {
    this_00 = (int *)operator_new(0x20);
    cocos2d::CCObject::CCObject((CCObject *)this_00);
    iVar6 = DAT_000eebd4;
    this_00[5] = 0;
    this_00[6] = 0;
    iVar6 = *(int *)(iVar6 + 0xeeaf0);
    this_00[7] = 0;
    *this_00 = iVar6 + 8;
    iVar6 = iVar8 + 0x120;
    iVar8 = iVar8 + 4;
    *(int **)(this + iVar6) = this_00;
  } while (iVar8 != 0x10);
  pcVar9 = (char *)(DAT_000eebd8 + 0xeeb16);
  Boss_Lode(pcVar9,(char *)(DAT_000eebdc + 0xeeb18),1,7,*(CCAnimate **)(this + 0x110),
            *(CCMutableArray **)(this + 0x120),0);
  Boss_Lode(pcVar9,(char *)(DAT_000eebe0 + 0xeeb36),1,9,*(CCAnimate **)(this + 0x114),
            *(CCMutableArray **)(this + 0x124),1);
  Boss_Lode(pcVar9,(char *)(DAT_000eebe4 + 0xeeb4e),1,9,*(CCAnimate **)(this + 0x118),
            *(CCMutableArray **)(this + 0x128),1);
  Boss_Lode(pcVar9,(char *)(DAT_000eebe8 + 0xeeb66),1,9,*(CCAnimate **)(this + 0x11c),
            *(CCMutableArray **)(this + 300),1);
  local_24 = 0;
  pBVar11 = this;
  do {
    uVar5 = DAT_000eebf0;
    if (local_24 == 0) {
      uVar5 = DAT_000eebec;
    }
    pCVar2 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(pBVar11 + 0x120));
    pCVar3 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar2);
    ppCVar10 = (CCObject **)(pBVar11 + 0x110);
    *ppCVar10 = pCVar3;
    pCVar7 = *(CCMutableArray **)(pBVar11 + 0x120);
    pBVar11 = pBVar11 + 4;
    uVar4 = __floatunsisf(*(int *)(pCVar7 + 0x18) - *(int *)(pCVar7 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar4,uVar5);
    *(undefined4 *)(pCVar3 + 0x20) = uVar5;
    cocos2d::CCObject::retain(*ppCVar10);
    local_24 = local_24 + 1;
  } while (local_24 != 4);
  return this;
}


