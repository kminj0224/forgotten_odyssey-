/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125548  Symbol: add_Item_View */

/* GameScene::add_Item_View(cocos2d::CCNode*) */

void __thiscall GameScene::add_Item_View(GameScene *this,CCNode *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CCTexture2D *pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar14;
  int local_7c;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  piVar10 = *(int **)(DAT_001256f0 + 0x125554);
  local_1c = *piVar10;
  piVar13 = (int *)(this + 300);
  for (local_7c = 0; local_7c < *(int *)(this + DAT_0012571c); local_7c = local_7c + 1) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001256f4 + 0x12556e));
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001256f8 + 0x125578));
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001256fc + 0x125582));
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00125700 + 0x12558c));
    iVar11 = piVar13[1];
    if (iVar11 == 0) {
      pcVar12 = *(code **)(*piVar1 + 0x118);
      piVar4 = piVar1;
    }
    else if (iVar11 == 1) {
      pcVar12 = *(code **)(*piVar2 + 0x118);
      piVar4 = piVar2;
    }
    else if (iVar11 == 2) {
      pcVar12 = *(code **)(*piVar3 + 0x118);
      piVar4 = piVar3;
    }
    else {
      pcVar12 = *(code **)(*piVar4 + 0x118);
    }
    pCVar5 = (CCTexture2D *)(*pcVar12)(piVar4);
    piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    pcVar12 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0,extraout_s1);
    (*pcVar12)(piVar4,aCStack_68);
    pcVar12 = *(code **)(*piVar4 + 0x3c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar7 = __mulsf3(*puVar6,0x3f000000);
    uVar7 = __subsf3(uVar7,DAT_00125704);
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar8 = __addsf3(*puVar6,DAT_00125708);
    uVar9 = __floatsisf(local_7c);
    uVar8 = __mulsf3(uVar8,uVar9);
    uVar14 = __addsf3(uVar7,uVar8);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar12)(piVar4,aCStack_60);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar4,5,5);
    memset(acStack_50,0,0x32);
    if (*(int *)(*(int *)(DAT_00125710 + 0x12565e) + *piVar13 * 0xc + 4) != 0) {
      sprintf(acStack_50,(char *)(DAT_00125714 + 0x125672),DAT_00125718 + 0x125674);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
      __mulsf3(*puVar6,0x3f000000);
      iVar11 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar14 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      (*pcVar12)(piVar1,aCStack_58);
      (**(code **)(*piVar4 + 0xcc))(piVar4,piVar1,0,*piVar13);
    }
    piVar13 = piVar13 + 5;
  }
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


