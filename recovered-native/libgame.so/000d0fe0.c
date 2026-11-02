/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0fe0  Symbol: onEnter */

/* ShopLayer::onEnter() */

void __thiscall ShopLayer::onEnter(ShopLayer *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  CCTexture2D *pCVar8;
  int *this_00;
  int *piVar9;
  int extraout_r1;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  int *piVar20;
  undefined8 uVar21;
  float fVar22;
  int local_98;
  CCPoint local_7c;
  CCPoint local_78;
  int local_74;
  int local_70;
  CCPoint aCStack_6c [8];
  CCPoint aCStack_64 [8];
  CCPoint aCStack_5c [8];
  CCPoint aCStack_54 [8];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  iVar12 = DAT_000d118c + 0xd0fec;
  piVar13 = *(int **)(iVar12 + DAT_000d1190);
  local_1c = *piVar13;
  uVar21 = (**(code **)(*(int *)this + 0x114))(this,1);
  iVar11 = 0;
  *(undefined4 *)(this + 0x140) = 0;
  do {
    iVar14 = iVar11 + 0x110;
    iVar11 = iVar11 + 4;
    *(undefined4 *)(this + iVar14) = 0;
  } while (iVar11 != 0x30);
  uVar21 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_7c,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_74,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000d1198 + 0xd103e),local_7c,local_78,local_74,local_70);
  iVar14 = (int)*(char *)(**(int **)(iVar12 + DAT_000d11a0) + **(int **)(iVar12 + DAT_000d11a8) +
                          DAT_000d11a4 + 4);
  iVar11 = *(int *)(**(int **)(iVar12 + DAT_000d11a0) +
                    (**(int **)(iVar12 + DAT_000d11a8) * 9 + iVar14 + DAT_000d11ac) * 4 + 4);
  if (iVar14 == 1) {
    iVar14 = 7;
    iVar19 = 0;
  }
  else if (iVar14 == 2) {
    iVar14 = 7;
    iVar19 = 1;
  }
  else if (iVar14 == 3) {
    iVar14 = 6;
    iVar19 = 4;
  }
  else if (iVar14 == 4) {
    iVar14 = 5;
    iVar19 = 2;
  }
  else {
    iVar19 = 3;
    if (iVar14 != 5) {
      iVar14 = 0;
      iVar19 = 0;
    }
  }
  iVar17 = 0;
  iVar1 = *(int *)(iVar12 + DAT_000d11b0);
  iVar10 = 0;
  piVar9 = (int *)(iVar1 + 0x14);
  do {
    iVar16 = 0;
    do {
      if (iVar16 == 0) {
        iVar16 = *(int *)(iVar1 + iVar17 + 8);
        if ((((iVar16 <= iVar11) && (iVar11 < *(int *)(iVar1 + iVar17 + 0x20))) &&
            (*piVar9 == iVar19)) || (((0x59 < iVar11 && (iVar16 == 0x5a)) && (*piVar9 == iVar19))))
        {
          *(int *)(this + 0x110) = iVar10;
        }
LAB_000d10ee:
        iVar16 = *(int *)(iVar1 + iVar17 + 8);
        if ((((iVar16 <= iVar11) && (iVar11 < *(int *)(iVar1 + iVar17 + 0x20))) &&
            (*piVar9 == iVar14)) || (((0x59 < iVar11 && (iVar16 == 0x5a)) && (*piVar9 == iVar14))))
        {
          *(int *)(this + 0x114) = iVar10;
        }
LAB_000d111a:
        iVar15 = *(int *)(iVar1 + iVar17 + 8);
        if (((iVar11 < iVar15) || (*(int *)(iVar1 + iVar17 + 0x20) <= iVar11)) || (*piVar9 != 10)) {
          iVar16 = 3;
          if (((0x5e < iVar11) && (iVar15 == 0x5f)) && (*piVar9 == 10)) {
            *(int *)(this + 0x118) = iVar10;
          }
        }
        else {
          *(int *)(this + 0x118) = iVar10;
          iVar16 = 3;
        }
      }
      else {
        if (iVar16 == 1) goto LAB_000d10ee;
        if (iVar16 == 2) goto LAB_000d111a;
      }
      iVar15 = *(int *)(iVar1 + iVar17 + 8);
      if ((((iVar15 <= iVar11) && (iVar11 < *(int *)(iVar1 + iVar17 + 0x20))) && (*piVar9 == 0xe))
         || (((0x5e < iVar11 && (iVar15 == 0x5f)) && (*piVar9 == 0xe)))) {
        *(int *)(this + 0x11c) = iVar10;
      }
      iVar15 = DAT_000d13b8;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
    iVar10 = iVar10 + 1;
    piVar9 = piVar9 + 6;
    iVar17 = iVar17 + 0x18;
    if (iVar10 == 0x97) {
      *(undefined4 *)(this + 0x120) = 0x9e;
      piVar9 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(iVar15 + 0xd11c2));
      piVar20 = (int *)(this + 0x110);
      local_98 = 0;
      do {
        piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName
                                  ((char *)(DAT_000d13bc + 0xd11d6));
        iVar11 = *piVar2;
        pcVar3 = *(code **)(iVar11 + 0x3c);
        puVar18 = (undefined4 *)(local_98 * 0x10 + *(int *)(iVar12 + DAT_000d13c0));
        uVar4 = __floatsisf(*puVar18);
        puVar5 = (undefined4 *)(**(code **)(iVar11 + 0x7c))(piVar2);
        uVar6 = __mulsf3(*puVar5,0x3f000000);
        __addsf3(uVar4,uVar6);
        uVar4 = __floatsisf(puVar18[1]);
        iVar11 = (**(code **)(*piVar2 + 0x7c))(piVar2);
        uVar6 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
        uVar21 = __addsf3(uVar4,uVar6);
        cocos2d::CCPoint::CCPoint(aCStack_6c,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
        (*pcVar3)(piVar2,aCStack_6c);
        (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_98,local_98);
        iVar11 = *piVar20;
        if (iVar11 != 0) {
          memset(acStack_3c,0,0x1e);
          sprintf(acStack_3c,(char *)(DAT_000d13c8 + 0xd127c),DAT_000d13cc + 0xd127a,
                  *(undefined4 *)(*(int *)(iVar12 + DAT_000d13c4) + iVar11 * 0xc + 4));
          piVar7 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
          pcVar3 = *(code **)(*piVar7 + 0x3c);
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
          __mulsf3(*puVar5,0x3f000000);
          iVar11 = (**(code **)(*piVar2 + 0x7c))(piVar2);
          uVar21 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_64,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
          (*pcVar3)(piVar7,aCStack_64);
          (**(code **)(*piVar2 + 0xcc))(piVar2,piVar7,DAT_000d13d0,*piVar20);
          if (*piVar20 - 0x51U < 0x46) {
            pCVar8 = (CCTexture2D *)(**(code **)(*piVar9 + 0x118))(piVar9);
            piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
            (**(code **)(*piVar7 + 0xcc))(piVar7,piVar2,0,0);
            Draw_Number::node();
            this_00 = (int *)Draw_Number::node();
            (**(code **)(*piVar7 + 0xcc))(piVar7,this_00,1,1);
            Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
            uVar21 = __aeabi_idivmod(*piVar20,10);
            fVar22 = (float)((ulonglong)uVar21 >> 0x20);
            pcVar3 = *(code **)(*piVar2 + 0x3c);
            if (extraout_r1 == 0) {
              cocos2d::CCPoint::CCPoint(aCStack_5c,(float)uVar21,fVar22);
              uVar21 = (*pcVar3)(piVar2,aCStack_5c);
              pcVar3 = *(code **)(*this_00 + 0x3c);
              cocos2d::CCPoint::CCPoint(aCStack_54,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
              ;
              (*pcVar3)(this_00,aCStack_54);
              iVar11 = 10;
            }
            else {
              cocos2d::CCPoint::CCPoint(aCStack_4c,(float)uVar21,fVar22);
              uVar21 = (*pcVar3)(piVar2,aCStack_4c);
              pcVar3 = *(code **)(*this_00 + 0x3c);
              cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
              ;
              (*pcVar3)(this_00,aCStack_44);
              iVar11 = extraout_r1;
            }
            Draw_Number::SetNumber((Draw_Number *)this_00,iVar11,0);
          }
        }
        piVar20 = piVar20 + 1;
        local_98 = local_98 + 1;
      } while (local_98 != 0xc);
      cocos2d::CCLayer::onEnter((CCLayer *)this);
      if (local_1c == *piVar13) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


