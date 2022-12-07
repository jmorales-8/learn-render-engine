# Git Project Styles
This file details the way we specify our git messages.

## Conventions
Rules that we should follow to ensure that the git tree is readable and understandable.
1. Capitalization and Punctuation: Capitalize the first word and do not end in punctuation. If using Conventional Commits, remember to use all lowercase. 
2. Mood: Use imperative mood in the subject line. Example – Add fix for dark mode toggle state. Imperative mood gives the tone you are giving an order or request.
3. Type of Commit: Specify the type of commit. See below for list of commit types.
4. Length: The first line should ideally be no longer than 50 characters, and the body should be restricted to 72 characters (goal not requirement).
5. Content: Be direct, try to eliminate filler words and phrases in these sentences (examples: though, maybe, I think, kind of). 

## Commit Types
These are the types of commits (may change in the future depending on the requirements of the project)
   1. `feat`        > a new feature is introduced with the changes
   2. `fix`         > a bug fix has occurred
   3. `chore`       > changes that do not relate to a fix or feature and don't modify src or test files (for example updating dependencies)
   4. `refactor`    > refactored code that neither fixes a bug nor adds a feature
   5. `docs`        > updates to documentation such as a the README or other markdown files
   6. `style`       > changes that do not affect the meaning of the code, likely related to code formatting such as white-space, missing semi-colons, and so on.
   7. `test`        > including new or correcting previous tests
   8. `perf`        > performance improvements
   9. `ci`          > continuous integration related
   10. `build`      > changes that affect the build system or external dependencies
   11. `revert`     > reverts a previous commit 
   12. `reland`     > reverts a previously reverted commit (with fixes if necessary)
   13. `start`      > starting commit / branching commit