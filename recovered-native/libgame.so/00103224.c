/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00103224  Symbol: Unit_init_layer */

/* Monster5120::Unit_init_layer() */

Monster5120 * __thiscall Monster5120::Unit_init_layer(Monster5120 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCMutableArray *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CCMutableArray **ppCVar8;
  char *pcVar9;
  CCMutableArray **ppCVar10;
  
  puVar2 = (undefined4 *)operator_new(0x24);
  *puVar2 = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[2] = 0x3c;
  puVar2[3] = 0x28;
  puVar2[6] = 0x1400;
  iVar7 = 0;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar7 + 0x120;
    iVar7 = iVar7 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar7 != 0x10);
  pcVar9 = (char *)(DAT_00103330 + 0x103280);
  Monster_Lode(pcVar9,(char *)(DAT_00103334 + 0x103286),1,7,*(CCAnimate **)(this + 0x110),
               *(CCMutableArray **)(this + 0x120),0);
  Monster_Lode(pcVar9,(char *)(DAT_00103338 + 0x1032a2),1,9,*(CCAnimate **)(this + 0x114),
               *(CCMutableArray **)(this + 0x124),1);
  Monster_Lode(pcVar9,(char *)(DAT_0010333c + 0x1032ba),1,9,*(CCAnimate **)(this + 0x118),
               *(CCMutableArray **)(this + 0x128),1);
  Monster_Lode(pcVar9,(char *)(DAT_00103340 + 0x1032d2),1,8,*(CCAnimate **)(this + 0x11c),
               *(CCMutableArray **)(this + 300),1);
  iVar7 = 0;
  ppCVar8 = (CCMutableArray **)(this + 0x120);
  uVar6 = DAT_00103344;
  while( true ) {
    pCVar3 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar8);
    pCVar4 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar8[-4] = pCVar4;
    ppCVar10 = ppCVar8 + 1;
    iVar7 = iVar7 + 1;
    uVar5 = __floatunsisf(*(int *)(*ppCVar8 + 0x18) - *(int *)(*ppCVar8 + 0x14) >> 2);
    uVar6 = __mulsf3(uVar5,uVar6);
    *(undefined4 *)(pCVar4 + 0x20) = uVar6;
    cocos2d::CCObject::retain((CCObject *)ppCVar8[-4]);
    if (iVar7 == 4) break;
    ppCVar8 = ppCVar10;
    uVar6 = DAT_0010334c;
    if (iVar7 != 1) {
      uVar6 = DAT_00103348;
    }
  }
  return this;
}


