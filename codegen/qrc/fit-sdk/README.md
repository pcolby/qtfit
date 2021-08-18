# FIT SDK Resources

Process for exporting resource files from the latest [FIT] SDK for use by the [QtFit] code generator.

## Pre-requisites

Fetch, and extract the latest [FIT] SDK via https://developer.garmin.com/fit/download/

## Profile Types

Here we're simply using LibreOffice [Calc] to save the *Types* sheet as a [TSV] file.

1. Open the SDK's `Profile.xlsx` file in LibreOffice Calc, or equivalent.
2. Select the *Types* sheet.
3. Click *Files* -> *Save as...*
4. Un-check: *Automatic file name extension*
5. Choose file type: *Text CSV*
6. Enter the file name: `ProfileTypes.tsv`
7. Click *Save*
8. If prompted to confirm, click *Use Text CSV Format*
9. Choose character set: *UTF-8*
10. Choose field delimiter: *{Tab}*
11. Choose string delimiter: *"*
12. Check *Save cell as shown*
13. Un-check: *Save cell formulas instead of calculated values*
14. Un-check: *Quote all text cells*
15. Un-check: *Fixed column width*
16. Click *OK*

## Messages

Here we using LibreOffice [Calc] to save the *Messages* sheet as a [TSV] file. But first
we need to strip new-line characters (which are always preceded with commas anyway).

1. Open the SDK's `Profile.xlsx` file in LibreOffice Calc, or equivalent.
2. Select the *Messages* sheet.
3. Click *Edit* -> *Find and Replace...*
4. Check: *Regular expressions*
5. Enter the **Find** string: `\n`
6. Leave the **Replace** field empty
7. Click *Replace All*
8. Follow same steps (except for the file name) from step 3 onward, to save to sheet as `ProfileMessages.tsv`


[Calc]: https://www.libreoffice.org/discover/calc/ "LibreOffice Calc"
[FIT]: https://developer.garmin.com/fit/overview/ "Flexible and Interoperable Data Transfer"
[QtFit]: https://github.com/pcolby/qtfit "Native Qt library for Garmin FIT"
[TSV]: https://en.wikipedia.org/wiki/Tab-separated_values "Tab-separated values"