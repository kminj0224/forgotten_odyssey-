/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001485cc  Symbol: parseConfigFile */

/* cocos2d::CCBMFontConfiguration::parseConfigFile(char const*) */

void __thiscall
cocos2d::CCBMFontConfiguration::parseConfigFile(CCBMFontConfiguration *this,char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined auStack_94 [4];
  undefined auStack_90 [4];
  char *local_8c;
  int local_88;
  int local_84;
  undefined auStack_80 [4];
  undefined auStack_7c [4];
  undefined auStack_78 [4];
  undefined auStack_74 [4];
  undefined auStack_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  undefined auStack_64 [4];
  undefined auStack_60 [4];
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  undefined auStack_54 [4];
  undefined auStack_50 [4];
  undefined auStack_4c [4];
  undefined auStack_48 [4];
  int local_44;
  void *local_40;
  ulong local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  
  uVar1 = CCFileUtils::fullPathFromRelativePath(param_1);
  piVar5 = (int *)(DAT_00148848 + 0x1485e6);
  FUN_001eed40(&local_8c,uVar1,auStack_94);
  iVar6 = *piVar5;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_44 = iVar6 + 8;
  local_40 = (void *)CCFileUtils::getFileData(local_8c,(char *)(DAT_0014884c + 0x1485f4),&local_3c);
  iVar2 = iVar6 + 8;
  if (local_40 != (void *)0x0) {
    local_88 = *(int *)(DAT_00148850 + 0x14861a) + 0xc;
    FUN_001eed80(&local_84,local_40,local_3c,auStack_90,param_1,iVar6);
LAB_0014880e:
    if (*(int *)(local_84 + -0xc) != 0) {
      iVar2 = FUN_001ece70(&local_84,10,0);
      if (iVar2 == -1) {
        FUN_001ee874(&local_88,&local_84);
        FUN_001edcf8(&local_84,0,0xffffffff);
      }
      else {
        FUN_001eebe0(auStack_80,&local_84,0,iVar2);
        FUN_001ee874(&local_88,auStack_80);
        FUN_001ed6b8(auStack_80);
        FUN_001eebe0(auStack_7c,&local_84,iVar2 + 1,0xffffffff);
        FUN_001ee874(&local_84,auStack_7c);
        FUN_001ed6b8(auStack_7c);
      }
      FUN_001eebe0(auStack_78,&local_88,0,9);
      iVar2 = FUN_001ed39c(auStack_78,DAT_00148854 + 0x148694);
      FUN_001ed6b8(auStack_78);
      if (iVar2 == 0) {
        FUN_001ee80c(auStack_74,&local_88);
        parseInfoArguments((basic_string)this);
        puVar4 = auStack_74;
        goto LAB_0014880a;
      }
      FUN_001eebe0(auStack_70,&local_88,0,0x11);
      iVar2 = FUN_001ed39c(auStack_70,DAT_00148858 + 0x1486ca);
      FUN_001ed6b8(auStack_70);
      if (iVar2 == 0) {
        FUN_001ee80c(auStack_6c,&local_88);
        parseCommonArguments((basic_string)this);
        puVar4 = auStack_6c;
        goto LAB_0014880a;
      }
      FUN_001eebe0(auStack_68,&local_88,0,7);
      iVar2 = FUN_001ed39c(auStack_68,DAT_0014885c + 0x148700);
      FUN_001ed6b8(auStack_68);
      if (iVar2 == 0) {
        FUN_001ee80c(auStack_64,&local_88);
        parseImageFileName(this,(basic_string)auStack_64,param_1);
        puVar4 = auStack_64;
        goto LAB_0014880a;
      }
      FUN_001eebe0(auStack_60,&local_88,0,7);
      iVar2 = FUN_001ed39c(auStack_60,DAT_00148860 + 0x148738);
      FUN_001ed6b8(auStack_60);
      if (iVar2 != 0) {
        FUN_001eebe0(auStack_5c,&local_88,0,4);
        iVar2 = FUN_001ed39c(auStack_5c,DAT_00148864 + 0x14875a);
        FUN_001ed6b8(auStack_5c);
        if (iVar2 != 0) {
          FUN_001eebe0(auStack_54,&local_88,0,0xe);
          iVar2 = FUN_001ed39c(auStack_54,DAT_00148868 + 0x1487b4);
          FUN_001ed6b8(auStack_54);
          if (iVar2 == 0) {
            FUN_001ee80c(auStack_50,&local_88);
            parseKerningCapacity((basic_string)this);
            puVar4 = auStack_50;
          }
          else {
            FUN_001eebe0(auStack_4c,&local_88,0,0xd);
            iVar2 = FUN_001ed39c(auStack_4c,DAT_0014886c + 0x1487ea);
            FUN_001ed6b8(auStack_4c);
            if (iVar2 != 0) goto LAB_0014880e;
            FUN_001ee80c(auStack_48,&local_88);
            parseKerningEntry(this,(basic_string)auStack_48);
            puVar4 = auStack_48;
          }
LAB_0014880a:
          FUN_001ed6b8(puVar4);
          goto LAB_0014880e;
        }
        CCRect::CCRect((CCRect *)&uStack_34);
        FUN_001ee80c(auStack_58,&local_88);
        parseCharacterDefinition(this,(basic_string)auStack_58,(_BMFontDef *)&local_38);
        FUN_001ed6b8(auStack_58);
        puVar3 = (uint *)std::
                         map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                         ::operator[](*(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                                        **)(this + 0x14),&local_38);
        *puVar3 = local_38;
        puVar3[1] = uStack_34;
        puVar3[2] = uStack_30;
        puVar3[3] = local_2c;
        puVar3[4] = uStack_28;
        puVar3[5] = uStack_24;
        puVar3[6] = local_20;
        puVar3[7] = uStack_1c;
      }
      goto LAB_0014880e;
    }
    FUN_001ed6b8(&local_84);
    FUN_001ed6b8(&local_88);
    local_44 = iVar6 + 8;
    iVar2 = local_44;
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_40 = (void *)0x0;
      iVar2 = local_44;
    }
  }
  local_44 = iVar2;
  FUN_001ed6b8(&local_8c);
  return;
}


