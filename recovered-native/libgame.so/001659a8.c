/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001659a8  Symbol: endElement */

/* cocos2d::CCTMXMapInfo::endElement(void*, char const*) */

void __thiscall cocos2d::CCTMXMapInfo::endElement(CCTMXMapInfo *this,void *param_1,char *param_2)

{
  uchar *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  basic_string bStack_34;
  int local_30;
  uchar *local_2c;
  uchar *local_28;
  undefined4 ***local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_001eed40(&bStack_34,param_2,auStack_3c);
  bVar2 = std::operator==(&bStack_34,(char *)(DAT_00165ae4 + 0x1659c0));
  if ((bVar2) && (iVar3 = (**(code **)(*(int *)this + 0x54))(this), iVar3 << 0x1e < 0)) {
    (**(code **)(*(int *)this + 0x60))(this,0);
    iVar8 = 0;
    iVar3 = (**(code **)(*(int *)this + 0x2c))(this);
    if (*(int *)(iVar3 + 0x18) != *(int *)(iVar3 + 0x14)) {
      iVar8 = *(int *)(*(int *)(iVar3 + 0x18) + -4);
    }
    FUN_001eed40(&local_30,*(undefined4 *)(this + 0x50),auStack_38);
    uVar4 = base64Decode(local_30,*(undefined4 *)(local_30 + -0xc),&local_2c);
    if (local_2c != (uchar *)0x0) {
      uVar5 = (**(code **)(*(int *)this + 0x54))(this);
      puVar1 = local_2c;
      if ((uVar5 & 0xc) == 0) {
        *(uchar **)(iVar8 + 0x24) = local_2c;
      }
      else {
        local_20 = *(undefined4 *)(iVar8 + 0x1c);
        local_1c = *(undefined4 *)(iVar8 + 0x20);
        uVar6 = __mulsf3(local_20,local_1c);
        __mulsf3(uVar6,0x40800000);
        uVar5 = __fixsfsi();
        ZipUtils::ccInflateMemoryWithHint(puVar1,uVar4,&local_28,uVar5);
        local_24 = &local_24;
        if (local_2c != (uchar *)0x0) {
          operator_delete__(local_2c);
        }
        local_2c = (uchar *)0x0;
        if (local_28 == (uchar *)0x0) goto LAB_00165a78;
        *(uchar **)(iVar8 + 0x24) = local_28;
      }
      FUN_001ed9dc(this + 0x50,DAT_00165ae8 + 0x165a76);
    }
LAB_00165a78:
    FUN_001ed6b8(&local_30);
    goto LAB_00165ac8;
  }
  bVar2 = std::operator==(&bStack_34,(char *)(DAT_00165af8 + 0x165ada));
  if (bVar2) {
    pcVar7 = *(code **)(*(int *)this + 0x48);
  }
  else {
    bVar2 = std::operator==(&bStack_34,(char *)(DAT_00165aec + 0x165a92));
    if (!bVar2) {
      bVar2 = std::operator==(&bStack_34,(char *)(DAT_00165af0 + 0x165aa0));
      if (bVar2) {
        pcVar7 = *(code **)(*(int *)this + 0x48);
        goto LAB_00165ac6;
      }
      bVar2 = std::operator==(&bStack_34,(char *)(DAT_00165af4 + 0x165ab8));
      if (!bVar2) goto LAB_00165ac8;
    }
    pcVar7 = *(code **)(*(int *)this + 0x48);
  }
LAB_00165ac6:
  (*pcVar7)(this,0);
LAB_00165ac8:
  FUN_001ed6b8(&bStack_34);
  return;
}


