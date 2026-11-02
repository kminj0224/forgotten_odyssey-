/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cbde4  Symbol: init */

/* StageSelectChild::init() */

void __thiscall StageSelectChild::init(StageSelectChild *this)

{
  int *piVar1;
  undefined4 *puVar2;
  char *__format;
  int iVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar16;
  int local_dc;
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint local_b0;
  CCPoint local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  CCPoint local_98;
  int local_94;
  CCPoint local_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  iVar14 = DAT_000cc050 + 0xcbdf0;
  piVar11 = *(int **)(iVar14 + DAT_000cc054);
  local_1c = *piVar11;
  FileSave();
  uVar5 = *(undefined4 *)(DAT_000cc058 + 0xcbe04);
  uVar7 = *(undefined4 *)(DAT_000cc058 + 0xcbe08);
  *(undefined4 *)(this + 0x118) = uVar5;
  *(undefined4 *)(this + 0x11c) = uVar7;
  *(undefined4 *)(this + 0x110) = uVar5;
  *(undefined4 *)(this + 0x114) = uVar7;
  (**(code **)(*(int *)this + 0x114))(this,1);
  memset(acStack_80,0,100);
  piVar8 = *(int **)(iVar14 + DAT_000cc05c);
  iVar6 = *piVar8;
  if (iVar6 == 9) {
    iVar6 = 8;
    __format = (char *)(DAT_000cc060 + 0xcbe48);
  }
  else {
    __format = (char *)(DAT_000cc064 + 0xcbe50);
  }
  sprintf(acStack_80,__format,iVar6);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(acStack_80);
  pcVar12 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_c0,extraout_s0,extraout_s1);
  (*pcVar12)(piVar1,aCStack_c0);
  pcVar12 = *(code **)(*piVar1 + 0x3c);
  puVar9 = *(undefined4 **)(iVar14 + DAT_000cc06c);
  uVar16 = __subsf3(puVar9[1],DAT_000cc068);
  cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar12)(piVar1,aCStack_b8);
  uVar16 = (**(code **)(*(int *)this + 0xcc))(this,piVar1,300,300);
  uVar16 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_b0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000cc078 + 0xcbec6),local_b0,local_ac,local_a8,local_a4);
  if (*piVar8 == 9) {
    __mulsf3(*puVar9,0x3f000000);
    uVar16 = __mulsf3(puVar9[1],0x3f000000);
    uVar16 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_98,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    cocos2d::CCPoint::CCPoint(local_90,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    vDrawImage((CCNode *)this,(char *)(DAT_000cc08c + 0xcbfb0),local_98,local_94,1,1);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    pcVar12 = *(code **)(*piVar8 + 0x3c);
    uVar5 = __mulsf3(*puVar9,0x3f000000);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
    uVar7 = __mulsf3(*puVar2,0x3f000000);
    __subsf3(uVar5,uVar7);
    uVar5 = __mulsf3(puVar9[1],0x3f000000);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    iVar6 = (**(code **)(*piVar1 + 0x7c))();
    uVar7 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
    uVar16 = __subsf3(uVar5,uVar7);
    cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar12)(piVar8,aCStack_88);
  }
  else {
    iVar6 = 0;
    local_dc = 0xa5;
    do {
      __floatsisf(local_dc);
      iVar13 = 0;
      do {
        uVar16 = __floatsisf(iVar13 * 0x5a + 0x14);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_a0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        iVar3 = iVar6 + 1 + iVar13;
        iVar10 = iVar13 + (*piVar8 + -1) * 10 + iVar6;
        uVar4 = (undefined)
                *(undefined4 *)
                 ((**(int **)(iVar14 + DAT_000cc084) * 200 + iVar10 + 0x98) * 4 +
                 **(int **)(iVar14 + DAT_000cc080));
        iVar13 = iVar13 + 1;
        __fixsfsi(*(undefined4 *)(iVar10 * 0x40 + *(int *)(iVar14 + DAT_000cc088)));
        Draw_Stage_Icon((CCPoint)this,local_a0,local_9c,iVar3,(bool)uVar4);
      } while (iVar13 != 5);
      iVar6 = iVar6 + 5;
      bVar15 = local_dc != 0x37;
      local_dc = local_dc + -0x6e;
    } while (bVar15);
  }
  if (local_1c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


