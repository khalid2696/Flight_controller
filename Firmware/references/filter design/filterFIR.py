#Code for designing FIR filter for use in mbed.
#Reference: https://os.mbed.com/cookbook/FIR-Filter
'''
Requirements:
    FIR
    Cutoff Frequency 20 HZ
    No of coefficients 15
'''
from numpy import sin, arange, pi
from scipy.signal import lfilter, firwin
from pylab import figure, plot, grid, show

#Signal generation
sample_rate = 100.0
nSamples = 100

F_10Hz = 10.0
A_10Hz = 1.0

F_30Hz = 30.0
A_30Hz = 1.0

t = arange(nSamples) / sample_rate
signal = A_10Hz*sin(2*pi*F_10Hz*t) + A_30Hz*sin(2*pi*F_30Hz*t)

nyq_rate = sample_rate / 2.0

cutoff_Hz = 20

numTaps = 15

fir_coeff = firwin(numTaps, cutoff_Hz/nyq_rate)
filtered_signal = lfilter(fir_coeff, 1.0, signal)

warmup = numTaps - 1
delay = (warmup / 2) / sample_rate
plot(t,signal,'-')
plot(t-delay, filtered_signal, 'r-')
plot(t[warmup:]-delay, filtered_signal[warmup:], 'g.', linewidth=4)
