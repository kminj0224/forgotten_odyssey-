/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d30cc  Symbol: Draw_Castle_Tree */

/* SkillTreeLayer::Draw_Castle_Tree() */

void __thiscall SkillTreeLayer::Draw_Castle_Tree(SkillTreeLayer *this)

{
  int *piVar1;
  int *piVar2;
  CCTexture2D *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *__format;
  code *pcVar7;
  int *piVar8;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar9;
  int local_b8;
  int local_b4;
  int local_b0;
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  piVar8 = *(int **)(DAT_000d3250 + 0xd30d8);
  local_1c = *piVar8;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d3254 + 0xd30de));
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d3258 + 0xd30ec));
  pcVar7 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_98,extraout_s0,extraout_s1);
  (*pcVar7)(piVar2,aCStack_98);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,99,99);
  local_b4 = 0;
  __format = (char *)(DAT_000d3260 + 0xd311e);
  do {
    local_b8 = local_b4 << 2;
    local_b0 = 0x18;
    do {
      if (8 < local_b8) goto LAB_000d323c;
      pCVar3 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
      pcVar7 = *(code **)(*piVar2 + 0x3c);
      __floatsisf(local_b0);
      uVar9 = __floatsisf(local_b4 * -0x2d + 0x76);
      cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
      (*pcVar7)(piVar2,aCStack_90);
      (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_b8,local_b8);
      sprintf(acStack_80,__format,
              *(undefined4 *)(*(int *)(DAT_000d3264 + 0xd317c) + local_b8 * 0x10));
      piVar4 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_80);
      pcVar7 = *(code **)(*piVar4 + 0x3c);
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
      __mulsf3(*puVar5,0x3f000000);
      iVar6 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar9 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
      (*pcVar7)(piVar4,aCStack_88);
      if (*(char *)(**(int **)(DAT_000d326c + 0xd31d6) + **(int **)(DAT_000d3268 + 0xd31d2) * 0x6c +
                    local_b8 + DAT_000d3270) == '\0') {
        (**(code **)(*piVar4 + 0xec))(piVar4,0x7f);
      }
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,0,0);
      local_b8 = local_b8 + 1;
      local_b0 = local_b0 + 0x30;
    } while (local_b0 != 0xd8);
    local_b4 = local_b4 + 1;
  } while (local_b4 != 3);
LAB_000d323c:
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


