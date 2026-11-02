/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135cd0  Symbol: unscheduleSelector */

/* cocos2d::CCScheduler::unscheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*)
    */

void cocos2d::CCScheduler::unscheduleSelector(_func_void_float *param_1,CCObject *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint in_r2;
  uint uVar4;
  uint in_r3;
  uint uVar5;
  int **ppiVar6;
  int *piVar7;
  undefined local_24 [4];
  CCObject *local_20;
  
  if ((in_r3 != 0) &&
     (((param_2 != (CCObject *)0x0 || ((int)(in_r2 << 0x1f) < 0)) && (*(int *)(param_1 + 0x28) != 0)
      ))) {
    piVar7 = *(int **)(*(int *)(param_1 + 0x28) + 0x14);
    uVar3 = (in_r3 & 0xff) + DAT_00135e48 + (in_r3 & 0xff000000) + (in_r3 >> 0x10 & 0xff) * 0x10000
            + (in_r3 >> 8 & 0xff) * 0x100 ^ DAT_00135e4c;
    uVar4 = DAT_00135e50 - uVar3 ^ uVar3 << 8;
    uVar5 = (DAT_00135e54 - uVar3) - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 << 10;
    ppiVar6 = *(int ***)(((uVar4 >> 0xf ^ (uVar5 - uVar3) - uVar4) & piVar7[1] - 1U) * 0xc + *piVar7
                        );
    local_20 = param_2;
    if (ppiVar6 != (int **)0x0) {
      ppiVar6 = (int **)((int)ppiVar6 - piVar7[5]);
    }
    for (; ppiVar6 != (int **)0x0; ppiVar6 = (int **)((int)ppiVar6[9] - piVar7[5])) {
      if ((ppiVar6[0xb] == (int *)0x4) && (iVar1 = memcmp(ppiVar6[10],local_24,4), iVar1 == 0)) {
        piVar7 = (int *)0x0;
        while( true ) {
          if (piVar7 == (int *)**ppiVar6) {
            return;
          }
          piVar2 = (int *)((int *)(*ppiVar6)[2])[(int)piVar7];
          if ((param_2 == (CCObject *)piVar2[5]) &&
             ((in_r2 == piVar2[6] ||
              (((param_2 == (CCObject *)0x0 && ((piVar2[6] & 1U) == 0)) && ((in_r2 & 1) == 0))))))
          break;
          piVar7 = (int *)((int)piVar7 + 1);
        }
        if ((piVar2 == ppiVar6[3]) && (*(char *)(ppiVar6 + 4) == '\0')) {
          CCObject::retain((CCObject *)piVar2);
          *(undefined *)(ppiVar6 + 4) = 1;
        }
        piVar2 = *ppiVar6;
        CCObject::release(*(CCObject **)(piVar2[2] + (int)piVar7 * 4));
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        iVar1 = (iVar1 + -1) - (int)piVar7;
        if (iVar1 != 0) {
          memmove((void *)(piVar2[2] + (int)piVar7 * 4),(void *)(piVar2[2] + ((int)piVar7 + 1) * 4),
                  iVar1 * 4);
        }
        if (piVar7 <= ppiVar6[2]) {
          ppiVar6[2] = (int *)((int)ppiVar6[2] + -1);
        }
        if (**ppiVar6 != 0) {
          return;
        }
        if (*(int ***)(param_1 + 0x2c) == ppiVar6) {
          param_1[0x30] = (code)0x1;
          return;
        }
        removeHashElement((CCScheduler *)param_1,(_hashSelectorEntry *)ppiVar6);
        return;
      }
      if (ppiVar6[9] == (int *)0x0) {
        return;
      }
    }
  }
  return;
}


