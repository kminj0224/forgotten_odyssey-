/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001926bc  Symbol: FUN_001926bc */

int FUN_001926bc(byte *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte *local_28;
  int local_24;
  
  iVar6 = DAT_001927fc + 0x1926c8;
  if (param_1 != (byte *)0x0) {
    if (*param_1 == 0) {
      iVar6 = FUN_0019c904();
      return iVar6;
    }
    local_24 = FUN_0019c49c();
    if (local_24 != 0) {
      local_24 = local_24 + 0x14;
      iVar2 = (***(code ***)(iVar6 + DAT_00192800))();
      iVar1 = DAT_00192804;
      if (iVar2 == 0) {
        (***(code ***)(iVar6 + DAT_00192808))
                  (**(undefined4 **)(iVar6 + DAT_0019280c),iVar6 + DAT_00192810);
        return 0;
      }
      iVar7 = 0;
      local_28 = param_1;
      do {
        if (*local_28 == 0) {
          *(undefined *)(iVar2 + iVar7) = 0;
          return iVar2;
        }
        iVar3 = iVar2;
        if ((uint)(local_24 - iVar7) < 4) {
          local_24 = local_24 + 0x14;
          iVar3 = (***(code ***)(iVar6 + iVar1))(iVar2,local_24);
          if (iVar3 == 0) {
            (***(code ***)(iVar6 + DAT_00192808))
                      (**(undefined4 **)(iVar6 + DAT_0019280c),iVar6 + DAT_00192810);
            (***(code ***)(iVar6 + DAT_00192814))(iVar2);
            return 0;
          }
        }
        bVar4 = *local_28;
        if (((((bVar4 == 0x40) || ((byte)(bVar4 + 0xbf) < 0x1a)) || ((byte)(bVar4 + 0x9f) < 0x1a))
            || (((((byte)(bVar4 - 0x30) < 10 || (bVar4 == 0x5f)) ||
                 ((bVar4 == 0x2d || ((bVar4 == 0x21 || (bVar4 == 0x2e)))))) || (bVar4 == 0x2a)))) ||
           ((((bVar4 == 0x7e || (bVar4 == 0x28)) || (bVar4 == 0x27)) ||
            ((bVar4 == 0x29 || (iVar2 = FUN_0019c42c(param_2,bVar4), iVar2 != 0)))))) {
          *(byte *)(iVar3 + iVar7) = *local_28;
          iVar7 = iVar7 + 1;
        }
        else {
          *(undefined *)(iVar3 + iVar7) = 0x25;
          iVar2 = iVar7 + 2;
          if (bVar4 >> 4 < 10) {
            cVar5 = '0';
          }
          else {
            cVar5 = '7';
          }
          *(byte *)(iVar3 + iVar7 + 1) = (bVar4 >> 4) + cVar5;
          bVar4 = bVar4 & 0xf;
          iVar7 = iVar7 + 3;
          if (bVar4 < 10) {
            cVar5 = bVar4 + 0x30;
          }
          else {
            cVar5 = bVar4 + 0x37;
          }
          *(char *)(iVar3 + iVar2) = cVar5;
        }
        local_28 = local_28 + 1;
        iVar2 = iVar3;
      } while( true );
    }
  }
  return 0;
}


