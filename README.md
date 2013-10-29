#Welcome
This repository is home to the libninety47-stats C/C++ library. The library is open source and released under GPLv3 (or later). The library is intended for use with Metatrader 4 but isn't limited to that, in practice being a standard Micrsoft dynamic link library
the file could be called from any other Windows based trading platforms. I should note that calling it a library at this stage might be a little of an indulgence give its only holds a single function, the Pearsons Correlation Coefficent.

In the future, if the need arises, I will add other functions to the public version of this library.

A copy of licenses the is available in the [root](https://github.com/ninety47/libninety47-stats/blob/master/LICENSE) of the repository or from 
[GNU website](http://www.gnu.org/licenses/gpl.txt).

#Disclaimer
Trading is inherently risky. If you use these libraries or any of the source code or indicators in this repository you do so acknowledging they are provided **AS-IS** and **WITH NO WARRANTY** of any kind. If you chose to use the results of these indicators or supporting libraries in your trading or any other decision making processes you do so at **your own risk**. In downloading, cloning, or generally obtaining a copy of anything from within this repository you acknowledge the author, Michael O'Keeffe, is **NOT responsilble** for any type of losses you incur as a result of using the:
* source code, 
* compiled or other binary products, or 
* any works derived from this source or binary code held in this repository.

#What is MetaTrader 4 (MT4)
MetaTrader 4 is a retail trading platform commonly used by retail traders to trade Foreign Exchange (FX) and Contracts For Difference (CFDs). You can learn more about MetaTrader from the the MetaQuotes [website](http://www.metaquotes.net/).

#Why build libraries?
The MetaQuoates Language 4 (MQL4) for MetaTrader 4 (MT4) is limited in many ways. When compared to modern programming languages MQL4 lacks basic language features that many you may take for granted e.g. C/C++ structs. It also suffers poor performance when asked to perform computationally intensive tasks such as statistical calculations.
The lack of computational grunt is why I moved the correlation function from MQL4 into C/C++. It makes the correlation table
indicator possible (along with other correlation related experiments I'm doing related to trading).

#Who should use this library?
Anyone who wants to write a script, indicator, or expert advisor for MetaTrader 4 that uses the function within the library. Also anyone who thinks this code could be used in there project.

#Future tasks
* CMake cross-platform build files (handy stuff to use on Linux and other non-windows trading platforms).
* Add support for passing calls directly to R via the RInside libraries.

#References
Here are some useful links:
* [Forex Factory](http://wwwforexfactory.com): Is a great source of trading ideas, MT4 help and general trader talk.
* [Steve Hopwood's FX forum](http://www.stevehopwoodforex.com/): Has lots of information and a supportive community for anyone wanting to build an indicators, experts etc.
* [Visual Studio Express Edition](http://www.microsoft.com/visualstudio/eng/products/visual-studio-express-products): Visual Studio (even though its Microsoft product) is a great IDE and hey its the easiest way to build DLLs.
* I'd put www.ninety47.com here buts its not even under construction yet :)

#Feedback
If you like this code let me know by following me here and on twitter [@ninety47](https://twitter.com/ninety47).

